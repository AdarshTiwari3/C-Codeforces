#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
#define NFS ios_base::sync_with_studio(false),cintie(nullptr),cout.tie(nullptr);
const int N=1e6+7;
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


//---------------------------------------------------------------//
void solve()
{


}


int main()
{
ll t;
cin>>t;
while(t--)
{
    ll x,y;
    cin>>x>>y;
    ll res=x-y;
    if(res==1 || res==0) 
    cout<<"NO\n";
    else
    cout<<"YES\n";
}



}