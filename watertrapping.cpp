#include<bits/stdc++.h>
using namespace std;

int trapping(int arr[],int n)
{
	int lmax[n],rmax[n];
	lmax[0]=arr[0];
	for(int i=1;i<n;i++)
	{
		lmax[i]=max(arr[i],lmax[i-1]);
	}
	rmax[n-1]=arr[n-1];
	for(int i=n-2;i>=0;i--)
	{
		rmax[i]=max(arr[i],rmax[i+1]);
	}
	int ans=0;
	for(int i=1;i<n-1;i++)
	{
		ans=ans+(min(lmax[i],rmax[i])-arr[i]);
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

	cout<<trapping(arr,n);
}