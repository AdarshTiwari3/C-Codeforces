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
  int s,n;
  cin>>s>>n;
  int c=0,f=0;
  for(int i=1;i<=n;i++)
  {   
      int x,y;
      cin>>x>>y;
     int mn=min(x,y);
     int mx=max(x,y);
      if(s<=mn)
      {
          c=1;
          break;
      }
      else 
      {s+=mx;
      f++;}
  }
  if(f==n) cout<<"YES\n";
  else cout<<"NO\n";

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
    
}