//    https://lightoj.com/problem/higher-math


#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int t, a[3];
	
	cin>>t;
	
	for(int i=1; i<=t; i++)
	{
		cin>>a[0]>>a[1]>>a[2];
		sort(a, a+3);
		
		cout<<"Case "<<i<<": "<<((a[0]*a[0])+(a[1]*a[1])==a[2]*a[2]?"yes":"no")<<endl;
	}
}
