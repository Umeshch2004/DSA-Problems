//Link: https://www.naukri.com/code360/problems/count-with-k-different-characters_1214627?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION

int countSubStrings(string s, int k) 
{
    // Write your code here.
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        unordered_map<char,int>mp;
        int c=0;
        for(int j=i;j<s.size();j++)
        {
            if(mp[s[j]])
            {
                if(c==k)
                {
                    count++;
                }
            }
            else{
                c++;
                if(c==k)
                count++;
            }
            mp[s[j]]++;
        }
    }
    return count;
    
}
