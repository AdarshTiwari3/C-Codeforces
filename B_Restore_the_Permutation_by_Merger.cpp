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
  int n,check;
  cin>>n;
  vector<int> v(n);
  for(auto &i:v) cin>>i;
  for(int i=0;i<2*n;i++)
  {
    check=v[i];
    for(int j=0;j<2*n;j++)
    {
        if(check==v[i])
        v.erase(v[i]);
    }
  }
  for(int i=0;i<v.size();i++)
  cout<<v[i]<<" ";
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