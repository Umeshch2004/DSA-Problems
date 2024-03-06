//link: https://www.codingninjas.com/studio/problems/nth-root-of-m_1062679?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int func(int mid, int n, int m)
{
    long long ans=1;
    for(int i=0;i<n;i++)
    {
        ans = ans*mid;
        if(ans>m) return 2;
    }
    if(ans ==m ) return 1;
    return 0;
}

int NthRoot(int n, int m) {
  // Write your code here.
  int low=0;
  int high = m;
  while(low<=high)
  {
      int mid = (low+high)/2;
      int mid1 = func(mid, n,m);
      if(mid1 == 1)
      {
          return mid;
      }
      else if(mid1 == 0)
      {
          low = mid +1;
      }
      else{
          high = mid-1;
      }
  }
  return -1;
}