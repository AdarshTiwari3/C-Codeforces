#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
const int N=1e6+7;
/*
int prime[N];
//sieve
void primecheck()
{
    prime[0]=prime[1]=0;
    for(int i=2;i<N;i++)
        {
            prime[i]=1;
        }
    for(int i=2;i*i<N;i++)
        {
            if(prime[i]==1)
            {
                for(int j=i*i;j<N;j+=i) 
                {
                 prime[j]=0;//for only sieve
                }
            }
        }
}
*/


//---------------------------------------------------------------//
int binarySearch()
{  int arr[6]={1,4,6,12,15,19};
  int start=0;
  int end=sizeof(arr)-1;
  int mid,num=19;
  while(start<=end)
  {
       mid=(start+end)/2;
      if(arr[mid]>num)
      {
          end=mid-1;
      }
      else if(arr[mid]<num)
      {
          start=mid+1;
      }
      else
      {
          return mid;
      }
  }
  return -1;

}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int arr[6]={1,4,6,12,15,19};
  //  cout<<binarySearch(arr,6)<<endl;
     int val=binarySearch();
    cout<<val<<endl;
}