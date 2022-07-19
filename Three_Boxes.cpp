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
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  int r1=a+b+c;
  int r2=a+b;
  int r3=a+c;
  int r4=b+c;
  if(r1<=d) cout<<1<<endl;
  else if(r2<=d || r3<=d || r4<=d) cout<<2<<endl;
  else cout<<3<<endl;

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