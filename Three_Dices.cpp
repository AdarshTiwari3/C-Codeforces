#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x,y;
        cin>>x>>y;
        float sum=x+y;
        float p3=6.0-sum;
        cerr<<p3<<endl;
        float res=p3/6.0;
        cerr<<res<<endl;
        cerr<<(float)2/6<<" "<<(double)1/6<<endl;
       // cout<<(float)((6-(x+y))/6)<<endl;
       if(sum>=6.0)
       cout<<"0\n";
       else
       cout<<res<<endl;
       
    }
}