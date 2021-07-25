//    https://lightoj.com/problem/digits-of-factorial


#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[1234567];
    a[0]=0;

    for(int i=1; i<=1000000; i++)
    {
        a[i]=a[i-1]+log(i);
    }

    long long t, b, d, n;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        cin>>n>>b;
        d=a[n]/log(b)+1;
        cout<<"Case "<<i<<": "<<d<<endl;
    }
}


