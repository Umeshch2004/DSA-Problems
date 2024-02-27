//Link: https://www.codingninjas.com/studio/problems/lower-bound_8165382?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int lowerBound(vector<int> arr, int n, int x) {
	// Write your code here
	int l=0;
	int r=n-1;
	int ans=n;

	while(l<=r)
	{
		int mid= (l+r)/2;

		if(arr[mid]>=x)
		{
			ans=mid;
			r=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return ans;
}

