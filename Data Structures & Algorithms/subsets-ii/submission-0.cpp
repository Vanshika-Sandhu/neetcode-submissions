class Solution {
public:
    void makeSet(int i, vector<int>& nums, vector<int>& currAns, vector<vector<int>>& ans)
    {
        ans.push_back(currAns);
        for(int x = i; x <nums.size(); x++)
        {
            if(x!=i && (nums[x] == nums[x-1]))
            continue;
            currAns.push_back(nums[x]);
            makeSet(x+1, nums, currAns, ans);
            currAns.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> currAns;
        makeSet(0, nums, currAns, ans);
        return ans;
        
    }
};
