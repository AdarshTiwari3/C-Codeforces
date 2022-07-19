#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back

const int N=1e6+7;
int prime[N];
//sieve


//---------------------------------------------------------------//
void solve()
{
  int n;
  cin>>n;
  int x,o=0,e=0;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      if(x%2==0) e++;
      else o++;
  }
  
  if((o>=1 && e>=1)||(o==n && n%2==1))
  cout<<"YES\n";
  else cout<<"NO\n";

}


int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int t;
 cin>>t;
 while(t--)
 {
    solve();
 }


}