#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x<=8)
        cout<<"0\n";
        else if(x%10!=9)
        cout<<x/10<<endl;
        else if(x%10==9)
        cout<<x/10+1<<endl;

    }
}