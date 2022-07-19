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
  int n,m;
  cin>>n>>m;
  int c=0,k=0;
  while(n--)
  {
      char ch[m];
      for(int i=0;i<m;i++)
      {
        cin>>ch[i];
        if(ch[i]=='(') c++;
        if(ch[i]==')') k++;
      }
  }
  int l=(min(c,k))*2;
  cout<<l<<endl;
  for(int i=1;i<=l;i++)
  {
      if(i%2==1)
      cout<<"(";
      else cout<<")";
  }


}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
    
}