#include<bits/stdc++.h>
#define ll long long
const int N=1e6+7;
int prime[N];

using namespace std;
//for a given range
void primecheck()
{
    int n;
    cin>>n;
   prime[0]=prime[1]=0;
   for(int i=2;i<=n;i++)
   {
       prime[i]=1;
   }
    for(int i=2;i*i<=n;i++)
    {
        if(prime[i]==1)
        {
            for(int j=i*i;j<=n;j+=i) 
             {
                // prime[j]=0;//for only sieve
                    if(prime[j]!=0)
                  {
                       prime[i]++;//for counting how many times prime number appears in 10^6
                       prime[j]=0;//like 2 500000
                   }
             }
        }
    }
    /* for(int i=2;i<=50;i++)
   {
       cout<<i<<" "<<prime[i]<<endl;
   }
   */
    
}
int main()
{
   // primecheck();
    int t;
     cin>>t;
    
    
    while(t--)
    {   primecheck();
        int n;
        cin>>n;
        cout<<prime[n]<<endl;
    }
    
}