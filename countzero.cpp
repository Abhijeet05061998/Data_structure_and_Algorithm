#include<bits/stdc++.h>
using namespace std;

int sol(int arr[],int first,int last)
{
	if(first<=last)
	{
		int mid=first+(last-first)/2;
		if((mid==0||arr[mid-1]==1)&&arr[mid]==0)
		{
			return mid;
		}

		if(arr[mid]==1)
		{
			return sol(arr,(mid+1),last);
		}
		else
		{
			return sol(arr,first,(mid-1));
		}
	}
	return -1;
}
int countzero(int arr[],int n)
{


	int first=0;
	int last=n-1;
	int ans=sol(arr,first,last);

	if(ans==-1)
	{
		return 0;
	}
	else
	{
		return (n-ans);
	}

}


int main()
{

    #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif


	int n;
	cin>>n;
	int*arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	cout<<countzero(arr,n);

}
//12
//1 1 1 1 1 1 1 1 1 0 0 0
//input
