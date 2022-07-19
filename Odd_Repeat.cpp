#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,s;
        cin>>n>>k>>s;
        ll sum=1+(n-1)*2;
        ll tsum=n*n;
        while(n--)
        {
             if(s==((sum*k)+(tsum-sum)))
             break;
             sum=sum-2;

        }
        cout<<sum<<endl;
    }
}