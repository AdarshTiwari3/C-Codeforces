#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int s=0;
        while(n>0)
        {
            s+=n*n;
            n-=2;
        }
        cout<<s<<endl;
    }
}