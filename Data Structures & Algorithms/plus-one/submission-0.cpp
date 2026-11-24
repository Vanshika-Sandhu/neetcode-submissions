class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int c = 1;
        for(int i = digits.size()-1; i>=0; i--)
        {
            digits[i] += c;
            if(digits[i]>9)
            {
                c = digits[i]/10;
                digits[i] %=10;
            }
            else
                c = 0;
        }

        if(c == 0)
            return digits;
        
        vector<int> newVec;
        newVec.push_back(c);
        for(int n : digits)
            newVec.push_back(n);
        
        return newVec;
    }
};
