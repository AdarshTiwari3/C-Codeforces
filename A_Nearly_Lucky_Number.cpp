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
 ll n;
 cin>>n;
 string s=to_string(n);
 int c=0,k=0,p=0;
 for(int i=0;i<s.size();i++)
 {
   if(s[i]=='4') c++;
   else if(s[i]=='7') k++;
   else p++;
 }
 if(c>0 && k>0 && p<c && p<k)
 cout<<"YES\n";
 else cout<<"NO\n";

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
}