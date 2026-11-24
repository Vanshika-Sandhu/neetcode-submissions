class Solution {
public:

    vector<vector<int>> ans;
    void makeSet(int i, vector<int> currAns, vector<int>& nums)
    {
        if(i>=nums.size())
        {
            ans.push_back(currAns);
            return;
        }
        makeSet(i+1, currAns, nums);
        currAns.push_back(nums[i]);
        makeSet(i+1, currAns, nums);

    }

    vector<vector<int>> helper(vector<int>& nums)
    {    
        vector<int> currAns ;

        makeSet(0, currAns, nums);
        return ans;
    }
    vector<vector<int>> subsets(vector<int>& nums) {

        return helper(nums);        
    }
};
