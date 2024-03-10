//Link: https://www.codingninjas.com/studio/problems/aggressive-cows_1082559?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

bool canweplace(vector<int>& stalls, int dist, int cows)
{
    int cntcows=1;
    int last = stalls[0];

    for(int i=1;i<stalls.size();i++)
    {
        if(stalls[i]-last >= dist)
        {
            cntcows++;
            last= stalls[i];
        }
        if(cntcows >= cows) return true;
    }
    return false;

}


int aggressiveCows(vector<int> &stalls, int k)
{
    //    Write your code here.
    sort(stalls.begin(), stalls.end());
    int n=stalls.size();
    int low=1;
    int high = stalls[n-1] - stalls[0];

    while(low<=high)
    {
        int mid=(low+high)/2;

        if(canweplace(stalls,mid,k)==true)
        {
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return high;

}