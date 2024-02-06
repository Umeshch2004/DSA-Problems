//Link: https://leetcode.com/problems/two-sum/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<pair<int,int>> ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back({nums[i],i});
        }
        sort(ans.begin(),ans.end());
        int i = 0;
        int j=n-1;

        while(i<j)
        {
            int sum = ans[i].first + ans[j].first;
            if(sum == target)return {ans[i].second, ans[j].second};
            else if(sum >target) j--;
            else i++; 
        }
        return {-1,-1};
    
    }
};