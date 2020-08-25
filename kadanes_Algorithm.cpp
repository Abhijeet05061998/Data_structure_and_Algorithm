#include<bits/stdc++.h>
using namespace std;
//kadanes Algorithm is basically used for find sub array with max sum;

int kadanes(int arr[],int n)
{
	int ans=arr[0],max_sum=arr[0];

	for(int i=1;i<n;i++)
	{
		max_sum=max(max_sum+arr[i],arr[i]);
		ans=max(ans,max_sum);
	}

	return ans;
}

int main()

{
	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<kadanes(arr,n)<<endl;
}