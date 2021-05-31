//    https://lightoj.com/problem/calm-down


#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
	int i, t, n;
	double pi=2*acos(0.0);
	cin>>t;
	
	for(i=1; i<=t; i++)
	{
		double R, r;
		cin>>R>>n;
		
		r=(R*sin(pi/n*1.0))/ (1+sin(pi/n*1.0));
		printf("Case %d: %.10lf\n", i, r);
	}
}
