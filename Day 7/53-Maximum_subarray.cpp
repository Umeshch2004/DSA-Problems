//Link: https://leetcode.com/problems/maximum-subarray/description/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0, maxi = INT_MIN;
        for(auto c: nums)
        {
            sum = max(c, sum+c);
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};