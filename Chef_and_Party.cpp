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
  vector<int> v(n);
  for(auto &i:v)
      cin>>i;
   int c=1;   
   sort(v.begin(),v.end());
   if(v[0]!=0) cout<<0<<endl;
   else {
  for(int i=1;i<n;i++)
  {
      if(v[i]<=i)
      c++;
      else break;
  }
  
  cout<<c<<endl;}

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