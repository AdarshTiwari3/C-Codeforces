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
{  // 2 3 5 1 4 0 ----> ans i=2--> on index 2 val 5 we got the equilibrium
    int n;
    cin>>n;
   vector<int> v(n);
   int l=0;// l for leftsum
   int r=0;// r for rightsum
   for(auto &i:v) {
       cin>>i;
       r+=i;//r=15
   }
   int i;
   for(i=0;i<n;i++)
   {  //cerr<<i<<endl;
       r=r-v[i];
       
      // cerr<<r<<" "<<l<<endl;
       if(l==r) break;
       //return i;
       l=l+v[i];
   }
   cout<<i<<endl;


}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}