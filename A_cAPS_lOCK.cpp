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
  string s; int flag=0;
  cin>>s;
  
   for(int i=1;i<s.size();i++)
   {
       if(s[i]>=97 && s[i]<=122) 
       {flag=1;break;}
    
   }
   if(flag==0 && (s[0]>=65&&s[0]<=90))
   {
       for(int i=0;i<s.size();i++)
       {
           s[i]=(int)s[i]+32;
       }
       cout<<s;

   }
   else if(flag==0 && (s[0]>=97 && s[0]<=122))
   {
       s[0]=(int)s[0]-32;
        for(int i=1;i<s.size();i++)
        {
        s[i]=(int)s[i]+32;
        }
        cout<<s;

   }
   else cout<<s;


}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
}