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
   int n,m;
   cin>>n>>m;
   int c=0;
   for(int i=1;i<=n;i++)
   {
       if(i%2!=0)
       {
           for(int j=1;j<=m;j++)
           {
               cout<<"#";
           }
       }
       if(i%2==0){
           c++;
           for(int j=1;j<=m;j++)
           {
               if(c%2!=0 && j==m)
               cout<<"#";
               else if(c%2==0 && j==1)
                cout<<"#";
               else cout<<".";
           }

       }
       cout<<endl;
   }

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    solve();
}