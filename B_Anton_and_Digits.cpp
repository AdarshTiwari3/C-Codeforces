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
  int a,b,c,d; cin>>a>>b>>c>>d;
  int mn=min(a,min(c,d));
  int r1=min((a-mn),b);
  cout<<mn*256+r1*32<<endl;

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
}