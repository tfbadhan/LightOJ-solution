//    https://lightoj.com/problem/lift


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t, i, a, b;
	cin>>t;
	for(i=1; i<=t; i++)
	{
		cin>>a>>b;
		
		if(a<b)
		{
			cout<<"Case "<<i<<": "<<((b-a)*4)+(a*4)+19<<endl;
		}
		if(a==b)
		{
			cout<<"Case "<<i<<": "<<(a*4)+19<<endl;
		}
		if(a>b)
		{
			cout<<"Case "<<i<<": "<<((a-b)*4)+(a*4)+19<<endl;
		}
	}
}
