#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    #endif 
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,s=0;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++)
         {
            cin>>a[i];
            s+=a[i];
         }
        if(s==m) cout<<"YES"<<"\n";
    
         else cout<<"NO"<<"\n";
         
    }
    return 0;
}