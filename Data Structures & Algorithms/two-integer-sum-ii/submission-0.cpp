class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int i = 0;
        int j = numbers.size()-1;
        
        vector<int> idx;
        while(i<j)
        {
            int num = numbers[i] + numbers[j];
            if(num==target)
            {
                idx.push_back(i+1);
                idx.push_back(j+1);
                break;
            }
            if(num > target)
                j--;
            else
                i++;
        }

        return idx;
    }
};
