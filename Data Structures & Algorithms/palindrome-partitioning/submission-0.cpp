class Solution {
public:

    vector<vector<string>> ans;
    bool checkPalindrome(string s, int st, int end)
    {
        while(st<end)
        {
            if(s[st++]!=s[end--])
                return false;
        }
        return true;
    }
    void func(int i, string & s, vector<string>& currAns)
    {
        if(i == s.size())
        {
            ans.push_back(currAns);
            return;
        }

        for(int x = i; x <s.size(); x++)
        {
            if(checkPalindrome(s, i, x))
            {
                currAns.push_back(s.substr(i, x-i+1));
                func(x+1, s, currAns);
                currAns.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> currAns;
        func(0, s, currAns);    
        return ans;
    }
};
