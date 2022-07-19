#include<bits/stdc++.h>
#define ll long long
const int N=1e6+7;
int prime[N]={0};

using namespace std;

void primecheck()
{
    
    prime[0]=prime[1]=1;

    for(int i=2;i*i<=1000000;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=1000000;j+=i) 
                {
                   prime[i]++;
                   prime[j]=1;
                }
        }
    }
    
}
int main()
{
    int t;
     cin>>t;
    primecheck();
    
    while(t--)
    {
        int n;
        cin>>n;
        cout<<primecheck[n]<<endl;
    }
}
/*prime factors
#include<bits/stdc++.h>
using namespace std;
int spf[1000001];
void primefactor()
{
    
    for(int i=1;i<=1000000;i++)
    {
        spf[i]=i;
    }

     for(int i=2;i*i<=1000000;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=1000000;j+=i)
            {
                if(spf[j]==j)
                spf[j]=i;
               // cout<<spf[j]<<" ";
            }
        }
    }
    
    


}
int main()
{
    primefactor();
    int n;
    cin>>n;
    
    while(n!=1)
    {
        cout<<spf[n]<<" ";
          n=n/spf[n];
    }
   cout<<endl;
    return 0;
}

*/