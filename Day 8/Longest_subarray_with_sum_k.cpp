//Link : https://www.codingninjas.com/studio/problems/630526?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

int longestSubarrayWithSumK(vector<int> a, long long k) {

    // Write your code here

    int n = a.size();

    int i = 0; int j = 0;

    int l = 0, maxlen = 0;

    long long s = 0;

    while(j<n)

    {

        s+=a[j];

        while(s>k)

        {

            s-=a[i];

            i++;

        }
        if(s==k)
        {
            l = j - i;
            maxlen = max(l , maxlen);
        }
        j++;

    }

    return maxlen+1;

}