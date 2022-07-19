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
  int n,k;
  cin>>n>>k;
  int a[n],c=0;
  for(int i=0;i<n;i++) cin>>a[i];
  //sort(a,a+n);
  for(int i=0;i<n;i++)
  {
    if(a[i]>=a[k-1] && a[i]>0)
    c++;
  }
  cout<<c<<endl;

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

        solve();
    
}