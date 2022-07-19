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
  int s1,s2,s3,s4;
  cin>>s1>>s2>>s3>>s4;
  set<int> st;
  st.insert(s1);
  st.insert(s2);
  st.emplace(s3);
  st.insert(s4);
  int ans=st.size();
  if(ans==4) cout<<"0\n";
  else cout<<4-ans<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
}