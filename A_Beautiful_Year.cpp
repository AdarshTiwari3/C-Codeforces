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
  int y;
  cin>>y;
  while (y>0)
  {
      y++;
      int p=y%10;
      int r=(y/10)%10;
      int s=(y/100)%10;
      int t=(y/1000)%10;
      if(p!=t && p!=r && p!=s && r!=s && r!=t && s!=t) break;;
  }
  cout<<y<<endl;

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
        solve();
    
}