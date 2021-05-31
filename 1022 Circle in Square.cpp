//    https://lightoj.com/problem/circle-in-square


#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
        double pi = 2.0 * acos(0.0);
	
	scanf("%d", &t);
	
	for(int i=1; i<=t; i++)
	{
		double r;
		scanf("%lf", &r);
		
		double res=(2*r * 2*r)- (pi*r*r);
		
		printf("Case %d: %.2lf\n", i, res);
	}
}
