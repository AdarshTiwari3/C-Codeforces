#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
  cin>>n;
  map<int,int> map1;
  int mx=0;int x;
  for(int i=0;i<n;i++)
  {
      
      cin>>x;
      map1[x]++;
      if(map1[x]>map1[mx])
      mx=x;
  }
cout<<mx<<endl;    
}