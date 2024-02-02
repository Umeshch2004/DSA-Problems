//link: https://leetcode.com/problems/sequential-digits/description/

class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s = "123456789";

        vector<int> ans;

        for(int len=2; len<=s.length(); len++)
        {
            for(int startidx=0; startidx<=s.length()-len; startidx++)
            {
                string temp = s.substr(startidx, len);
                int poss = stoi(temp); 

                if(poss>=low && poss<=high)
                ans.push_back(poss);
            }
        }

        return ans;
        
    }
};