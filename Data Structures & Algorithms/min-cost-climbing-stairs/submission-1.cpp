class Solution {
public:
    int helper(vector<int>& cost, int s)
    {
        if(s >= cost.size())
            return 0;
        
        int s1 = helper(cost, s+1);
        int s2 = helper(cost, s+2);
        return cost[s] + min(s1, s2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        //int a1 = helper(cost, 0);
        //int a2 = helper(cost, 1);
        //return min(a1, a2);

        vector<int> dp(cost.size()+1, 0);
        dp[0] = 0;
        dp[1] = cost[0];
        for(int i = 2; i<=cost.size(); i++)
        {
            dp[i] = cost[i-1] + min(dp[i-1], dp[i-2]);
        }

        return min(dp[cost.size()], dp[cost.size()-1]);

        
    }
};
