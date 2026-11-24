class Solution {
public:
    vector<vector<int>> ans;

    void makeSet(int i, vector<int> currAns, vector<int> & nums, int t)
    {
        if(t==0)
        {
            ans.push_back(currAns);
            return;
        }
        if(t<0 || i >= nums.size())
            return;

        
        for(int x = i; x<nums.size(); x++)
        {
            if(x == i || nums[x] != nums[x-1])
            {
                currAns.push_back(nums[x]);
                makeSet(x+1, currAns, nums, t-nums[x]); 
                currAns.pop_back();
            } 
        }
                


    }
    void helper(vector<int> & nums, int t)
    {
        vector<int> currAns;
        makeSet(0, currAns, nums, t);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        helper(candidates,target);
        return ans;
        
    }
};
