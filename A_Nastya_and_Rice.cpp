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
  float n,a,b,c,d;
  cin>>n>>a>>b>>c>>d;
  float s=a-b,t=a+b,u=c-d,v=c+d;
  if(u/s==n||v/s==n || u/t==n || v/t==n)
  {
      cout<<"YES\n";
  }
  else cout<<"NO\n";

}


int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      solve();
  }



}