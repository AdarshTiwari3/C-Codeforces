#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,w,h,p,res=0;
        cin>>n>>b;
    
        for (int i = 0; i < n; i++)
        {
            /* code */
            cin>>w>>h>>p;
            if(p<=b)
            res=max(w*h,res);
        
        }
        
        if(res==0)
        cout<<"no tablet\n";
        else
        cout<<res<<endl;
        
    }
}