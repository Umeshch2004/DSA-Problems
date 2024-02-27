//Link: https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

int upperBound(vector<int> &arr, int x, int n){
	// Write your code here.
    int l=0;
	int r=n-1;
	int ans=n;

	while(l<=r)
	{
		int mid= (l+r)/2;

		if(arr[mid]>x)
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