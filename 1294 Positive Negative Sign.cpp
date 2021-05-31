//    https://lightoj.com/problem/positive-negative-sign


#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t, n, m;
	cin>>t;
	for(int i=1; i<=t; i++)
	{
		cin>>n>>m;
		
		cout<<"Case "<<i<<": "<<(n/2)*m<<endl;
	}
}
