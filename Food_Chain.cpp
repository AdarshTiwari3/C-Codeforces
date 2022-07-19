#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll e,k;
        cin>>e>>k;
        int c=0;
        while(1)
        {
            c++;
            e=e/k;
            if(e==0)
            break;
        }
        cout<<c<<endl;
    }
    return 0;
}