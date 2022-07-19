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
  int n; cin>>n;
  vector<int> v(12);
  int sum=0;
  for(auto &i:v) 
  {cin>>i; sum+=i;}
  sort(v.begin(),v.end());
  //int mx=v[11];
 int i,c=0;
  int s=0; 
   if(sum<n) cout<<-1<<endl;
   else if(n==0) cout<<0<<endl;
   else 
   {
       for(i=11;i>=0;i--)
       {    //cerr<<v[i]<<" ";
            s+=v[i];
            if(s>=n)
            break;
            c++;
       }
       cout<<c+1<<endl;

   }
 
  

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
      solve();
}