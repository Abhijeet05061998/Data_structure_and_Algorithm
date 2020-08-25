#include<iostream>
using namespace std;
void binary(int n)
{
	if(n<1)
	{
		return;
	}
	binary(n/2);

	cout<<n%2;
}
int main()
{

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	int n;
	cin>>n;

	binary(n);
}