//    https://lightoj.com/problem/brush-1



#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;

        int a[n+5], sum=0;
        for(int j=1; j<=n; j++)
        {
            cin>>a[j];
            if(a[j]>0)
            {
                sum+=a[j];
            }
        }

        cout<<"Case "<<i<<": "<<sum<<endl;
        
    }
}
