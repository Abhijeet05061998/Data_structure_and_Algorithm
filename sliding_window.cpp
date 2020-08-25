#include<bits/stdc++.h>
using namespace std;

int main()
{
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	int n,k;
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}


	//find the sum upto n
	int sum=0;
	for(int i=0;i<k;i++)
	{
		sum+=arr[i];
	}
	int curr_sum=sum;
	for(int i=k;i<=n;i++)
	{
		curr_sum+=arr[k]-arr[i-k];
		curr_sum=max(curr_sum,sum);
	}
	cout<<curr_sum<<endl;
}