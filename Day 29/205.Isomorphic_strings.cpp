//Link: https://leetcode.com/problems/isomorphic-strings/description/


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mpp, mpp2;

        for(int i=0;i<s.size();i++)
        {
                if(mpp[s[i]]!=mpp2[t[i]])
                {
                    return false;
                }
                mpp[s[i]] = i+1;
                mpp2[t[i]] = i+1;
        }
        return true;
    }
};