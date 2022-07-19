#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int r=a+b;
        if(r>=0 && r<3)
        cout<<"1\n";
        else if(r>=3 && r<=10)
        cout<<"2\n";
        else if(r>=11 && r<=60)
        cout<<"3\n";
        else if(r>60)
        cout<<"4\n";
    }
}