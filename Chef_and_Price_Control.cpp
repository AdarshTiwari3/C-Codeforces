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
        int a[n],s=0,s1=0;
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
            s+=a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]>k)
            a[i]=k;
            s1+=a[i];
        }
        cout<<s-s1<<endl;
        
    }
    
}