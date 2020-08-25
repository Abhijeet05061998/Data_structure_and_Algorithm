#include<bits/stdc++.h>
using namespace std;



int pallindrome(int n)
{
	int rev=0;
	while(n!=0)
	{
		int r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==n)
	{
		return true;
	}
	else
	{
		return false;
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

	if(pallindrome(n))
	{
		cout<<"Given Integer is pallindrome"<<endl;
	}
	else
	{
		cout<<"Given Integer isn't pallindrome"<<endl;
	}
}