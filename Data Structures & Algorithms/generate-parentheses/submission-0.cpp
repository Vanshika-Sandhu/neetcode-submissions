class Solution {
public:

    vector<string> ans;
    void genPar(string& s, int open , int close)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(s);
            return;
        }

        if(open>0)
        {
            s += "(";
            genPar(s, open-1, close);
            s = s.substr(0, s.size()-1);

        }
        if(close>open)
        {
            s += ")";
            genPar(s, open, close-1);
            s = s.substr(0, s.size()-1);

        }
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        genPar(s, n, n);
        return ans;
    }
};
