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
  int k,n=1,f=0,m=1;
  cin>>k;
  int a[k],b[k],c[k];
  for(int i=0;i<k;i++)
  cin>>a[i];
  while(1)
  {
    for(int i=0;i<k;i++)
    {
        b[i]=a[i]^n;
        c[i]=a[i]^m;
    }
    sort(b,b+k);
    for(int i=0;i<k;i++)
    {
        if(a[i]==b[i]) 
         f=1;
    }
    if(f)
    break;
    n++;
  }
  cout<<n<<endl;

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