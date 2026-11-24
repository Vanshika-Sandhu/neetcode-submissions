class Solution {
public:

    bool validQueen(int r, int c, vector<string> board, int n)
    {
        int temprow = r;
        int tempcol = c;
        //for diagonal up
        while(r>=0 && c>=0)
        {
            if(board[r][c] == 'Q')
                return false;
            r--;
            c--;
        }
        //for diagonal down
        r = temprow;
        c = tempcol;
        while(r<n && c>=0)
        {
            if(board[r][c] == 'Q')
                return false;
            r++;
            c--;
        }

        //for right to left
        r = temprow;
        c = tempcol;
        while(c>=0)
        {
            if(board[r][c] == 'Q')
                return false;
            c--;
        }

        return true;
    }
    void solve(int n , int col, vector<string>& board, vector<vector<string>>& ans)
    { 
        if(col == n)
        {
            ans.push_back(board);
            return;
        }

        for(int r = 0; r<n; r++)
        {
                if(!validQueen(r,col,board, n)) continue;
                
                board[r][col] = 'Q';
                solve(n, col+1, board, ans);
                board[r][col] = '.';
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n) ;
        string s (n, '.');
        for(int i = 0; i<n; i++)
            board[i] = s;

        solve(n, 0, board, ans);
        return ans;
        
    }
};
