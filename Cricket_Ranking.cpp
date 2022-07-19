#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r1,r2,w1,w2,c1,c2;
        cin>>r1>>w1>>c1;
        cin>>r2>>w2>>c2;
        if((r1>r2 && w1>w2)|| (w1>w2 && c1>c2) || (c1>c2 && r1>r2) || (r1>r2 && w1>w2 && c1>c2))
        cout<<"A\n";
        else
        cout<<"B\n";
    }
}