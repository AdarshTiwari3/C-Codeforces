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
  string s; cin>>s;
  int l=s.size(),x;
   vector<int> v(l);
  for(int i=0;i<l;++i)
  {
      if(s[i]!='+')
      {
        x=s[i]-'0';
        v.push_back(x);
      }
  }
  sort(v.begin(),v.end());
  for(int i=0;i<v.size();++i)
  {
      if(v[i]!=0 && i<v.size()-1) 
      cout<<v[i]<<"+";
      if(i==v.size()-1)
      cout<<v[i];
      
  }
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
}