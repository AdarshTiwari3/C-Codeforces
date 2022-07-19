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
{ int flag=0;
  string s,s1;
  cin>>s>>s1;

  transform(s.begin(),s.end(),s.begin(),::tolower);
  transform(s1.begin(),s1.end(),s1.begin(),::tolower);
  for(int i=0;i<s.size();i++)
  {
    if(s[i]<s1[i])
    {
        flag=-1;
        break;
    }
    else if(s[i]>s1[i]) {flag=1; break;}
      
    
  }
  cout<<flag<<endl;
  
  
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
    
}