//Link: https://leetcode.com/problems/longest-common-prefix/description/

//Time Complexity: O(m*n)
//Space Complexity: O(1)
class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
       string ans;

       for(int i=0;i<str[0].length();i++)
       {
        char ch = str[0][i];

        bool match = true;

        for(int j=0;j<str.size();j++)
        {
            if(str[j].size() < i || ch != str[j][i])
            {
                match = false;
                break;
            }
        }
        if(match == true)
        {
            ans.push_back(ch);
        }
        else
        {
            break;
        }
       }
       return ans;
    }
};