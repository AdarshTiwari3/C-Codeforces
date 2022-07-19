#include<bits/stdc++.h>
#define ll long long
#define db double
#define ld long double
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif 

    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c1,c2;
        d tm,res;
        c2=n/3;
        cerr<<c2<<endl;
        res=(float)n/3;
        tm=res-c2;
        cerr<<res<<endl;
        if(tm>=0.50 && tm <1)
        c2=c2+1;
        cerr<<c2<<"\n";
        c1=n-2*c2;
        cerr<<c1<<endl;;
        cout<<c1<<" "<<c2<<"\n";
        
    }

    
    return 0;
}