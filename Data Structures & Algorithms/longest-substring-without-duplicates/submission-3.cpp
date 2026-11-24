class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int si = 0;
        int maxLen = 0;
        unordered_set<char> charSet;
        for(int i = 0; i<s.size() ; i++)
        {
            if(charSet.find(s[i])==charSet.end())
            {
                charSet.insert(s[i]);
            }
            else
            {
                maxLen = max(maxLen, (int)charSet.size());
                while(s[si]!=s[i])
                {
                    charSet.erase(s[si]);
                    si += 1;
                }
                si++;
                //cout<<si<<endl;
                //for(auto c : charSet)
                //    cout<<c<<" ";
                //cout<<endl;

            }
        }

        maxLen = max(maxLen, (int)charSet.size());
        return maxLen;

    }
};
