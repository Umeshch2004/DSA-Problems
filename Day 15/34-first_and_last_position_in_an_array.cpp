//Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> ans;
        int low=0;
        int high=n-1;
        int first =-1;
        int last = -1;
        int mid;

        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid] == target)
            {
                first = mid;
                high = mid-1;
            }
            else if(nums[mid]<target)  low = mid+1;
            else high = mid-1;
        }
        ans.push_back(first);

        low=0;
        high = n-1;
        while(low<=high)
        {
            mid = (low+high)/2;
            if(nums[mid]==target)
            {
                last = mid;
                low = mid+1;
            }
            else if(nums[mid]<target)  low = mid+1;
            else high = mid-1;
        }
        ans.push_back(last);

        return ans;
    }
};