#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,y,n;
        cin>>x>>y>>n;
    
       ll tm = x * (n/x) + y ;
        if (tm > n){
          tm -= x ;
         }
        cout << tm << endl;
    }
}