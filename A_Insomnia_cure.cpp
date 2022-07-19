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
 int k,l,m,n,d;
 cin>>k>>l>>m>>n>>d;
 if(k==1)
 cout<<d<<endl;
 else {
     int mn=min(k,(min(l,min(m,n))));
     int mx=max(k,max(l,max(m,n)));
     cout<<(d/mn)+(d%k)+(d%l)+(d%m)+(d%n)+1<<endl;
 }
 
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
    
}