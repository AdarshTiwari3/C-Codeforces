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
   int n;
   cin>>n;
   string s; 
   cin>>s;
   transform(s.begin(),s.end(),s.begin(),::tolower);
   set<char> st(s.begin(),s.end());
   //for(auto i:st)
  // cout<<i;
  //cout<<st.size();
   if(st.size()==26)
   cout<<"YES\n";
   else cout<<"NO\n";

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
        solve();
    
}