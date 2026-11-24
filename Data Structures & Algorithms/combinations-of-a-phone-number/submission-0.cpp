class Solution {
public:

    vector<string> keypad = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    void keypadComb(string digits, string & currAns)
    {
        if(digits.size()==0)
        {
            ans.push_back(currAns);
            return;
        }

        string alpha = keypad[digits[0] - '0' - 1];
        for(int i = 0; i<alpha.size(); i++)
        {
            currAns += alpha[i];
            keypadComb(digits.substr(1), currAns);
            currAns = currAns.substr(0, currAns.size()-1);
        }
    }
    vector<string> letterCombinations(string digits) {

        string currAns = "";
        if(digits.size()==0)
            return ans;
        keypadComb(digits, currAns);
        return ans;
    }
};
