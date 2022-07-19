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
  int a1,a2,a3,b1,b2,b3,n;
  cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    int r1=a1+a2+a3;
    int r2=b1+b2+b3;
    if(r1<=5 && r2<=10 &&(!(r1==n && r2==n)))
    cout<<"YES\n";
    else cout<<"NO\n";

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
    
}