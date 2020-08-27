#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
	bool arr[100000];
	int size=sizeof(arr)/sizeof(arr[0]);

    fill(arr,arr+size+1,true);
	for(int i=2;i*i<=size;i++)
	{
		if(arr[i]==true)
		{
			for(int j=i*i;j<=size;j+=i)
			{
				arr[j]=false;
			}
		}
	}
    int j=2;
    while(n!=0)
    {
    	if(arr[j]==true)
    	{
    		cout<<j<<" ";
    		j++;
    		n--;
    	}
    	else
    	{
    		j++;
    	}
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
	prime(n);
}