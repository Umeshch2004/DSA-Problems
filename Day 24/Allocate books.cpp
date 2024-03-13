//Link: https://www.codingninjas.com/studio/problems/allocate-books_1090540?utm_source=youtube&utm_medium=affiliate&utm_campaign=codestudio_Striver_BinarySeries

bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int count=1;
    int pagesum=0;

    for(int i=0;i<n;i++)
    {
        if(pagesum + arr[i] <= mid)
        {
            pagesum += arr[i];
        }
        else
        {
            count++;
            if(count > m || arr[i] > mid)
            {
                return false;
            }
            pagesum = arr[i];

        }
    }
    return true;
}

int findPages(vector<int> arr, int n, int m) {
    // Write your code here.
    int low=0;

    int sum =0;
    if(n<m)
    {
        return -1;
    }

    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    int high = sum;

    int ans=-1;
    int mid = low + (high-low)/2;

    while(low<=high)
    {
        
        if(isPossible(arr, n, m, mid))
        {
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        mid = low + (high-low)/2;
    }
    return ans;
}