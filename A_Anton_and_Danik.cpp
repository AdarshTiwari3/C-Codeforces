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
 ll n;
 cin>>n;
 string s;
 cin>>s;
 ll c=0,k=0;
 for(int i=0;i<s.length();i++)
 {
     cin>>s[i];
     if(s[i]=='A') c++;

    else if(s[i]=='D') k++;
 }
 if(c>k) cout<<"Anton\n";
 else if(c<k) cout<<"Danik\n";
 else if(c==k) cout<<"Friendship\n";

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
    
}