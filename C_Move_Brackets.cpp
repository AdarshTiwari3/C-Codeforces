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
  int n; cin>>n;
  string s; cin>>s;
  string s1="()";
  int a=-1; int c=0,k=0;
  while(s.find(s1)!=-1)
  {
    a=s.find(s1);
   // s.erase(a,s1.size());
    s.replace(a,s1.size(),"");
  }
  for(int i=0;i<s.size();i++)
  {
     if(s[i]=='(') c++;
     else k++;
  }
  if(c==k)
  cout<<c<<endl;
  else cout<<"0\n";

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