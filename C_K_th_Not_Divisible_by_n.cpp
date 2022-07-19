#include<bits/stdc++.h>
using namespace std;
const int N=1e+7;
#define ll long long
ll a[N];
void solve(ll n)
{
    ll v=0;
    for(ll i=0;i<N;i++)
    {
       v=v+1;
       while(v%n==0)
       {
           v++;
        
       }
       a[i]=v;
    }

}
int main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        solve(n);
        cout<<a[k-1]<<endl;
    }
}