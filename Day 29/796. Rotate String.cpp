//Link: https://leetcode.com/problems/rotate-string/description/

class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.length() != goal.length())
       {
        return false;
       } 

       for(int i=0;i<goal.length();i++)
       {
        bool rotation = true;

        for(int j=0;j<s.length();j++)
        {
            if(goal[(i+j) % goal.length()] != s[j])
            {
                rotation = false;
                break;
            }  
        }
        if(rotation)
        {
            return true;
        }

        
       }
       return false;
    }
    
};