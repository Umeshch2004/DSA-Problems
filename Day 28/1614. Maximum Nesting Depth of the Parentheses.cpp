//Link:  https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/?envType=daily-question&envId=2024-04-04

class Solution {
public:
    int maxDepth(string s) {
        int ans=0;
        int depth =0;

        for(char c: s)
        {
            if(c=='(')
            {
                depth++;
                ans = max(depth,ans);
            }
            if(c==')')
            {
                depth--;
            }
        }
        return ans;
    }
};