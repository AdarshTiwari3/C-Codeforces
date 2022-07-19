#include<bits/stdc++.h>
using namespace std;
const int N=1e+7;
int a[N];
void solve()
{
    int v=0;
    for(int i=0;i<N;i++)
    {
       v=v+1;
       while(v%3==0 || v%10==3)
       {
           v++;
        
       }
       a[i]=v;
    }

}
int main()
{
    solve();
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        
        cout<<a[k-1]<<endl;
    }
}