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
  string s,s1,s2,s3;
  string s4;
  s1="qwertyuiop";
  s2="asdfghjkl;";
  s3="zxcvbnm,./";
  cin>>s4>>s;
  if(s4[0]=='R')
  { 
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s1.size();j++)
        {
            if(s[i]==s1[j])
            {
             s[i]=s1[j-1]; break;
            }
            if(s[i]==s2[j])
            {
             s[i]=s2[j-1]; break;
            }
            if(s[i]==s3[j])
            {
             s[i]=s3[j-1]; break;
            }
        }
    }
  }
  else if(s4[0]=='L')
  {
    
    for(int i=0;i<s.size();i++)
    {
        for(int j=0;j<s1.size();j++)
        {  
            if(s[i]==s1[j])
            {
             s[i]=s1[j+1]; break;
            }
            else if(s[i]==s2[j])
             {
                 s[i]=s2[j+1]; break;
             }
            else if(s[i]==s3[j])
             {
                 s[i]=s3[j+1]; break;
             }
             
        }
    
    
    }
    
  }
    cout<<s<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
    
}