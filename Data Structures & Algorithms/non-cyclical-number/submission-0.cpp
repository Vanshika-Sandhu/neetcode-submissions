class Solution {
public:
    bool isHappy(int n) {

        set<int> num ;

        int currAns = 0;
        while(n!=1)
        {
            while(n!=0)
            {
                int d = n%10;
                n/=10;
                currAns+= d*d;
            }
            n = currAns;
            currAns = 0;
            if(num.find(n) == num.end())
                num.insert(n);
            else
                break;
        }
        if(n == 1)
            return true;
        return false;
        
    }
};
