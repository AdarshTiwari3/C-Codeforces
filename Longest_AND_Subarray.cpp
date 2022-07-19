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
  int n;
  cin>>n;
  if(n==1) 
  {
      cout<<"1"<<endl;
  
  }
  else{
  ll ans=1;
  while(ans*2<=n)
  {
      ans=ans*2;
  }
  ll k=n-ans+1;
  if(n==ans)
  cout<<n/2<<endl;
  else{
      cout<<max(k,ans/2)<<endl;
  }
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