#include<bits/stdc++.h>
using namespace std;


int palindrome(string s,int start ,int end)
{
	
     if(start>=end)
     {
        return true;
     }
     return (s[start]==s[end]&&palindrome(s,start+1,end-1));
}
int main()
{

	 #ifndef ONLINE_JUDGE
	freopen("input.txt","r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	string s;
	cin>>s;
	int start=0,end=s.size()-1;

	if(palindrome(s,start,end))
	{
		cout<<"The given string is palindrome"<<endl;
	}
	else
	{
		cout<<"The given string isn't palindrome"<<endl;
	}
}