#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
const int N=1e6+7;
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


//---------------------------------------------------------------//
void solve()
{
  int n,m;
  cin>>n>>m;
  char s; 
  //string s;
  int flag=0,c=0;
  for(int  i=0;i<n;i++)
  {
  for(int j=0;j<m;j++)
  {
    cin>>s;
    //cin>>s;
    if(s=='C'|| s=='M'||s=='Y') 
     {  flag=1; break;}
   // if(s=="W"|| s=="B"||s=="G") flag++;

    
  }

  }
  if(flag==0) cout<<"#Black&White\n";
  else cout<<"#Color\n";

  
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
     solve();
}