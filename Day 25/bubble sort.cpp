//Link: https://www.codingninjas.com/studio/problems/bubble-sort_624380?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

void bubbleSort(vector<int>& arr, int n) 
{
    //write your code here
    for(int i=1;i<n;i++)
    {
        for(int j=0; j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}