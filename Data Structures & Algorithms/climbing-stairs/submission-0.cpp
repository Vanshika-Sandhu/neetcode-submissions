class Solution {
public:
    int helper(int n)
    {
        if(n == 0 || n == 1)
        {
            return 1;
        }


        int s1 = helper(n-1);
        int s2 = helper(n-2);
        return s1 + s2;
    }
    int climbStairs(int n) {

        //return helper(n);
        int s1 = 0;
        int s2 = 1;
        int ans = 0;
        for(int i = 1; i<=n ; i++)
        {
            ans = s1+s2;
            s1 = s2;
            s2 = ans;
        }

        return ans;
    }
};
