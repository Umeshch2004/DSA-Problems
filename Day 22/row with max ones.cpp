//Link: https://www.codingninjas.com/studio/problems/row-of-a-matrix-with-maximum-ones_982768?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int lowerbound(vector<int>arr, int n, int x)
{
    int low=0;
    int high = n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>=x)
        {
            ans = mid;
            high = mid-1;
        }
        else{
            low=  mid+1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)
{
    //    Write your code here.
    int cnt_max=0;
    int index= -1;
    for(int i=0;i<n;i++)
    {
        int cnt_ones = m - lowerbound(matrix[i], m, 1);
        if(cnt_ones>cnt_max)
        {
            cnt_max=cnt_ones;
            index=i;
        }

    }
    return index;

}