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
  ll n;
  cin>>n;
  ll a[n];
  for(ll i=0;i<n;i++)
  {
      cin>>a[i];
  }
  sort(a,a+n);
  for(ll i=0;i<n;i++)
  {
      cout<<a[i]<<" ";
  }

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
    
}