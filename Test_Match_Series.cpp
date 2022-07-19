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
   int a[5],c=0,k=0;
   for(int i=0;i<5;i++)
   {   cin>>a[i];
       if(a[i]==1)
       c++;
       if(a[i]==2) k++;
   }
   if(c>k) cout<<"INDIA\n";
   else if(k>c) cout<<"ENGLAND\n";
   else cout<<"DRAW\n";
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