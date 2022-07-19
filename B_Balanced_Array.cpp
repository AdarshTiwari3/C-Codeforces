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
  if(n%4!=0) cout<<"NO\n";
  else {
      cout<<"YES\n";
      int s1=0,s2=0;
      for(int i=0;i<n/2;i++)
      {
          s1+=(i+1)*2;
          cout<<(i+1)*2<<" ";
      }
      for(int i=1;i<n-2;i+=2)
      {  s2+=i;
          cout<<i<<" ";
      }
      cout<<s1-s2<<endl;
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