#include<bits/stdc++.h>
using namespace std;

int square(int n)
{
	if(n==0||n==1)
	{
		return n;
	}

	int start=1,end=n,ans=0;
	while(start<=end)
	{
		int mid=(start+end)/2;
		if(mid*mid==n)
		{
			return mid;
		}
		if(mid*mid<n)
		{
			start=mid+1;
			ans=mid;
		}
		else
		{
			end=mid-1;
		}
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

	cout<<square(n)<<endl;
}