#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        if((a+b+c+n)%3==0 && (a+b+c+n)/3>=max(a,max(b,c)))
        cout<<"YES\n";
        else cout<<"NO\n";
    }
}
//printing prime factors simply
/*
int n; //n=30
cin>>n;
for(int i=2;i<=n;i++)
{
    while(n%i==0)
    {
        cout<<i<<" ";//2 3 5 for n=48 2 2 2 2 3 prints
        n=n/i;
    }
}


*/
