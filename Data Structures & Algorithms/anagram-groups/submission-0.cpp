class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    
    vector<vector<string>> ans;
    map<string, vector<string>> stringMap;
    for(int i=0; i<strs.size(); i++)
    {
        string temp = strs[i];
        sort(temp.begin(), temp.end());
        stringMap[temp].push_back(strs[i]);
    }

    for(auto it : stringMap)
    {
        ans.push_back(it.second);
    }
    return ans;
        
    }
};
