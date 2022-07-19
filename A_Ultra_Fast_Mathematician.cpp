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
  string s1,s2;
  char c[N];
  cin>>s1>>s2;
  for(int i=0;i<s1.size();i++)
  {
      if((s1[i]=='0' && s2[i]=='0')||(s1[i]=='1'&& s2[i]=='1'))
      c[i]='0';
      else c[i]='1';
  }
  cout<<c<<endl;

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
    
}