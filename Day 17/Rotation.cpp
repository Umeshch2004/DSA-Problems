//Link: https://www.codingninjas.com/studio/problems/rotation_7449070?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
int findKRotation(vector<int> &arr){
    // Write your code here.   
    int n=arr.size(); 
    int low=0;
    int high =n-1;
    int ans = INT_MAX;
    int index= -1;

    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[low]<=arr[high])
        {
            if(arr[low]<ans)
            {
                index=low;
                ans = arr[low];
            }
        }
        if (arr[low] <= arr[mid]) {
            // keep the minimum:
            if (arr[low] < ans) {
                index = low;
                ans = arr[low];
            }

            // Eliminate left half:
            low = mid + 1;
        }
        else { //if right part is sorted:

            // keep the minimum:
            if (arr[mid] < ans) {
                index = mid;
                ans = arr[mid];
            }

            // Eliminate right half:
            high = mid - 1;
        }
        
    }   
    return index;
}