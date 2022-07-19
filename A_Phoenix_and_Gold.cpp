#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
const int N=1e6+7;
/*
int prime[N];
//sieve
void primecheck()
{
    prime[0]=prime[1]=0;
    for(int i=2;i<N;i++)
        {
            prime[i]=1;
        }
    for(int i=2;i*i<N;i++)
        {
            if(prime[i]==1)
            {
                for(int j=i*i;j<N;j+=i) 
                {
                 prime[j]=0;//for only sieve
                }
            }
        }
}
*/


//---------------------------------------------------------------//
void solve()
{
    int n,x;
    cin>>n>>x;
    vector<int> v(n);
    int s=0;
    for(auto &i:v)
    {
        cin>>i;
        s+=i;
    }
    sort(v.begin(),v.end());
    if(s==x) cout<<"NO\n";
    else 
    {   cout<<"YES\n";
        for(auto i=v.rbegin();i!=v.rend();i++)
        cout<<*i<<" ";
        cout<<endl;
    }


}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}