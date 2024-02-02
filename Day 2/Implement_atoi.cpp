//link: https://www.geeksforgeeks.org/problems/implement-atoi/1

//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int ans =0 ;
        int i=0;
        
        int flag = 0;
        
        if(str[0] == '-')
        {
            i=1;
            flag = 1;
        }
        
        for(;i<str.size();i++)
        {
            if(str[i] >= 48 && str[i] <= 57)
            ans = ans*10 + (str[i] - 48);
            else
            return -1;
        }
        
        if(flag)
        return -1*ans;
        
        return ans;
    }
};