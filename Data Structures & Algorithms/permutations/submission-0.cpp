class Solution {
public:
    vector<vector<int>> ans;

    void makePerm(vector<int> & nums, vector<int> currAns, vector<bool> & helper)
    {
        if(currAns.size()==nums.size())
        {
            ans.push_back(currAns);
            return;
        }

        for(int x = 0; x<nums.size(); x++)
        {
            if(helper[x]) continue;
            currAns.push_back(nums[x]);
            helper[x] = true;
            makePerm(nums, currAns, helper);
            currAns.pop_back();
            helper[x] = false;
        }

    }
    vector<vector<int>> permute(vector<int>& nums) {

    vector<int> currAns ;
    vector<bool> helper(nums.size(), false);
    makePerm(nums, currAns, helper);
    return ans;
        
    }
};
