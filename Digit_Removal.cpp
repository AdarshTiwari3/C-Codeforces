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
    ll n,d;
    cin>>n>>d;
    ll t=n,c=0,f=0,r;
    while(t>0)
    {
        r=t%10;
        t/=10;
        c++;
        if(r==d)
        {
            t=t*pow(10,c)+(r+1)*pow(10,c-1);
            f=t-n;
            c=0;
        }
    }
    cout<<f<<endl;
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