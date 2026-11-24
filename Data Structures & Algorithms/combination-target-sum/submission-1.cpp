class Solution {
public:

    vector<vector<int>> ans;

    void makeSet(int i, vector<int> currAns, vector<int> & nums, int t, int sum)
    {
        if(t < 0)
        return;
        if(i>=nums.size())
        {
            if(t == 0)
            { 
                ans.push_back(currAns);
            }
            return;
        }

        makeSet(i+1, currAns, nums, t, sum);
        if(t<nums[i])
            return;
        currAns.push_back(nums[i]);
        sum+=nums[i];
        makeSet(i, currAns, nums, t-nums[i], sum);

    }
    void helper(vector<int> & nums, int t)
    {
        vector<int> currAns;
        makeSet(0, currAns, nums, t, 0);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {

    helper(nums,target);

    return ans;
        
    }
};
