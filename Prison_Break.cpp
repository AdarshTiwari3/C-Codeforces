#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fact(ll n)
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
int main()
{
    ll t,s=0;
    cin>>t;
    ll res=fact(t-1);
    while(t>0)
    { 
        s+=t%10;
        t=t/10;

    }
    cerr<<res<<" "<<s<<endl;
    
    ll f=0,c=1;
    while(t>0)
    {
       f=f+c;
       c=c*10;
       t--;
    }
    cerr<<f<<endl;
    cout<<s*res*f<<endl;

}