#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
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
  string n,h1,h2,h3,h4,h5;
  cin>>n;
  cin>>h1>>h2>>h3>>h4>>h5;
  if((h1[0]==n[0]||h2[0]==n[0]||h3[0]==n[0]||h4[0]==n[0]||h5[0]==n[0])||(h1[1]==n[1]||h2[1]==n[1]||h3[1]==n[1]||h4[1]==n[1]||h5[1]==n[1]))
  cout<<"YES\n";

  else
  cout<<"NO\n";

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
    
}