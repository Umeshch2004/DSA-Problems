//Link: https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

bool isPossible(vector<int> arr, int k, int mid)
{
    int count=1;
    int painter=0;
    
    for(int i=0;i<arr.size();i++)
    {
        if(painter + arr[i] <= mid)
        {
            painter += arr[i];
        }
        else
        {
            count++;
            if(count>k || arr[i]>mid)
            {
                return false;
            }
            painter = arr[i];
        }
    }
    return true;
}

int findLargestMinDistance(vector<int> &arr, int k)
{
    //    Write your code here.
    int low=0;
    int sum=0;
    int ans=-1;
    for(int i=0;i<arr.size();i++)
    {
        sum += arr[i];
    }

    int high = sum;
    int mid = (low + high)/2;

    while(low<=high)
    {
        if(isPossible(arr,k , mid))
        {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        mid = (low+high)/2;
    }
    return ans;
}