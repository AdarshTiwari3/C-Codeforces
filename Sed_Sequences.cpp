#include<bits/stdc++.h>
#define ll long long
#define db double
#define ld long double
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],s=0;
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        if(s%k==0)
        cout<<"0\n";
        else
        cout<<"1\n";
    }
}