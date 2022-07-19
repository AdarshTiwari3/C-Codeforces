#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(r-l==0)
        cout<<"0\n"<<endl;
        else if(r-l==1)
        cout<<r%l<<endl;
        else
        cout<<(r-1)/2<<endl;
        
        
    }
}