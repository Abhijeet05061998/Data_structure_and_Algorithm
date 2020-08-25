#include<bits/stdc++.h>
using namespace std;


int josheph(int n,int k)
{
	if(n<1)
	{
		return 1;
	}
	return (josheph(n-1,k)+k-1)%n+1;
}
int main()
{
	
	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,k;
	cin>>n>>k;

	cout<<josheph(n,k);
}