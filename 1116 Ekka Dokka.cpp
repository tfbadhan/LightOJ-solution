//    https://lightoj.com/problem/ekka-dokka


#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long i, t, n, m, w;
	cin>>t;
	for(i=1; i<=t; i++)
	{
		cin>>w;
		
		if(w%2==0)
		{
			n=w/2;
			m=2;
			while(n%2==0)
			{
				n/=2;
				m*=2;
			}
			cout<<"Case "<<i<<": "<<n<<" "<<m<<endl;
		}
		else 
		{
			cout<<"Case "<<i<<": "<<"Impossible"<<endl;
		}
	}
}
