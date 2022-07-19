#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll s,a,b,c;
        cin>>s>>a>>b>>c;
        ll res=s/c;
        cout<<(res/a)*b+res<<endl;
    }
}