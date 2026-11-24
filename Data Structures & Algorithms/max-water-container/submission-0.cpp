class Solution {
public:
    int maxArea(vector<int>& heights) {

        int ans = 0;
        int currStorage = 0;
        int i = 0;
        int j = heights.size()-1;
        while(i<j)
        {
            currStorage = min(heights[i], heights[j]) * (j-i);
            ans = max(currStorage, ans);
            if(heights[i]<heights[j])
                i ++;
            else
                j --;
        }
        return ans;
        
    }
};
