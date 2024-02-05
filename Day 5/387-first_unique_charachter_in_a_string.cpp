//Link: https://leetcode.com/problems/first-unique-character-in-a-string/

class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++)
        {
            if(mp.find(s[i])==mp.end())
            {
                mp[s[i]]=i;
            }
            else
            {
                mp[s[i]]=INT_MAX;
            }
        }

        int ans=INT_MAX;
        for(auto it: mp)
        {
            ans = min(ans,it.second);
        }

        return ans==INT_MAX?-1:ans;
    }
};