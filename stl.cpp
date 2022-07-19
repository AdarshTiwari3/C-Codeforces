#include<bits/stdc++.h>
using namespace std;
#define End cout<<endl;
int main()
{
    //array container 
    //max size inside main will be 10^6 whereas outside main means globally can be 10^7
   // max size of bool array inside main will be 10^7 and 10^8 globally
    array<int, 5> arr;
    arr.fill(5); //fill with 5 in all array
    for(int i=0;i<5;i++)
    {
        cout<<arr.at(i)<<" "; // prints 5 5 5 5 5
    }
    cout<<endl;
    //iterators
    // begin(),end()--->next to last elements,rbegin()<---reverse begin(last elements),rend()<--- before starting elements;

    /*                  
               using iterator;         
                      */

    array<int, 4> a={1,2,3,4};
    for(auto it=a.begin(); it!=a.end();it++) //print 1 2 3 4
    {
    cout<<*it<<" ";    
    }   
    cout<<endl;
    for(auto it=a.rbegin(); it!=a.rend();it++)//prints 4 3 2 1
    {
    cout<<*it<<" ";    
    }   
    cout<<endl;
    //same as previous
    for(auto it=a.end()-1; it>=a.begin();it--)//prints 4 3 2 1
    {
    cout<<*it<<" ";    
    }  
    cout<<endl;
    //for each loop
    for(auto it: a)
    {
        cout<<it<<" ";   //prints 1 2 3 4
    }
    End;
    // string example
    string s={"hello"};
    for(auto c: s)
    {
        cout<<c<<" "; //prints h e l l o

    }
    End;
    //size
    cout<<a.size()<<" "<<arr.size(); // prints 4 5 
    End;
    //front (1st element)
    cout<<a.front(); //1 same as a.at(0);
    End;
    //back last element
    cout<<a.back();  //4 same as a.at(a.size()-1)
    End;
    //array container ends here
     //vectors  
     vector<int> v; //size 0 {}
     cout<<v.size()<<endl;// 0
     v.push_back(0); // {0} of size 1//v.emplace_back(0) is also same only diff is that it takes lesser time than push back
     v.push_back(3); //{0,3}  size=2
     cout<<v.size()<<endl;
     v.pop_back(); // pop the last element {0}
     cout<<v.size()<<endl;
     v.clear();// clr all the elements
     cout<<v.size()<<endl;
     vector<int> v1(5,0); //  {0,0,0,0,0} size 5 intialized with 0
     cout<<v1.size()<<endl;
     vector<int> v2(v1.begin(),v1.end()); // copy from v1 to v2 {0,0,0,0,0}
     cout<<v2.size()<<endl;
     //same as previous
     vector<int> v3(v2);//copy from v2 to v3 {0,0,0,0,0}
     cout<<v3.size()<<endl;
     vector<int> v4={2,4,6,8};
     vector<int> v5(v4.begin(),v4.begin()+2); // contains only {2,4}
     for(auto it:v5)
     {
         cout<<it<<" "; //prints {2,4}
     }
    End;
    swap(v5,v4);//swap func
    for(auto it:v5)
     {
         cout<<it<<" "; //prints {2,4,6,8}
     }
    End;
    //begin(),end(),rbegin(),rend()
    //vector of 2d vector
    vector<vector<int>> vec;
    vector<int> vec1;
    vec1.push_back(11);
    vec1.push_back(22);

    vector<int> vec2;
    vec2.push_back(13);
    vec2.push_back(15);

    vector<int> vec3;
    vec3.push_back(15);
    vec3.push_back(23);
    vec3.push_back(17);

    vec.push_back(vec1);
    vec.push_back(vec2);
    vec.push_back(vec3);
   // cout<<" "<<vec.size()<<endl;
   for(auto vctr: vec)
   {
       for(auto it: vctr)
       {
           cout<<it<<" ";
       }
       End;
   }
       //alternate way
       for(int i=0;i<vec.size();i++)
       {
           for(int j=0;j<vec[i].size();j++)
           {
               cout<<vec[i][j]<<" ";
           }
           End;
       }
       //define 10x20 vector
       vector<vector<int>> vect(10,vector<int> (20,0));
       for(auto vctr: vect)
       {
       for(auto it: vctr)
       {
           cout<<it<<" ";
       }
       End;
       }
       //or
       vector<int> arr1[10];
       arr1[0].push_back(29);
       for(auto vctr: arr1)
       {
       for(auto it: vctr)
       {
           cout<<it<<" ";
       }
       End;
       }
        //3d vectors
        //vector<vector<vector<int>>> vect1(10,vector<vector<int>> vect1(20,vector<int>(30,0)));
  //vector ends here
    //set,map
    //like a[5]={1,1,2,3,3}---->{1,2,3} ->3 elements// by default sorted  
  /*  set<int> st;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.insert(x);//similar to push_back //O(log n)
    }
    cout<<st.size()<<endl;
    for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    End;
    //st->{1,2,3}
    //wanna delete 1st elements
    st.erase(st.begin());//st.erase(iterator);
    st.count(1);
  for(auto it=st.begin();it!=st.end();it++)
    {
        cout<<*it<<" ";
    }
    End; */
    set<int> st1={1,2,2,3,3};
    auto it=st1.find(2);
   // set is of 2 types ordered nd unordered set
   unordered_set<int>s3;//if there is no use of ascending always use unordered set as it is of O(1)
   s3.insert(3);
   s3.emplace(1);
   s3.insert(2);
   for(auto it:s3)
   {
       cout<<it<<" "; //2 3 1
   }
   End;
   multiset<int> ms;// O(log n)
   ms.insert(1);
   ms.insert(2);
   ms.insert(1);
   ms.insert(2);
   ms.insert(3);
    for(auto it:ms)
   {
       cout<<it<<" "; 
   }
   End;
   //ms--> {1,1,2,2,3}
   ms.erase(3);
   //auto it=find(2);
   ms.clear();
   ms.erase(ms.begin(),ms.end());
   //Map starts here
   //its used a kind of dictionary
   // Adarsh-->03
   //Ayush-->19
   //Pratik-->20 .....
   //Map only stores unique keys
   map<string,int> mp;//O(log n)
   mp["Adarsh"]=03;
   mp["Ayush"]=19;
   mp["Pratik"]=20;// same as mp.emplace("Pratik",20);
   mp["Ankit"]=21;
   mp.count("Adarsh");
   /*
   Adarsh 03
   Ankit  21
   Ayush  19
   Pratik 20
   */
  mp["Adarsh"]=04;
  mp["Ram"]=04;//valid
  mp.erase("Adarsh");
  // Adarsh 04 ->> overrights the key value
  if(mp.empty())
  {
      cout<<"yes map is empty.."<<endl;
  }
  else cout<<"Map is not empty"<<endl;
  pair<int,int> pr1;
  pr1.first=1;
  pr1.second=10;
  //printing map values
  /*for(auto it: mp)
  {
      cout<<mp.first<<" "<<mp.second<<endl;
  }
  for(auto it=mp.begin();it!=mp.end();it++)
  {
      cout<<it->first<<" "<<it->second<<endl;
  } */
  unordered_map<int,int> ump; //all same only TC O(1) in almost all cases O(n) in wrost case
  //Pair starts here
 // pair<int int> pr{1,2};//pr.first=1,pr.second=2
 // cout<<p.first<<" "<<p.second<<endl;
  //nested pairs
  pair<pair<int,int>, int> pr={{1,2},2};
  //accessing 2 in {1,2} in nested pair
  cout<<pr.first.second<<" "<<pr.second<<endl;
  vector<pair<int,int>>vctr1;
  set<pair<int,int>> set1;
  map<pair<int,int>,int> map;
  //unordered map cant define as pair
  multimap<string,int> mmp;
 // mmp["Adarsh"]=3;
 // mmp["Adarsh"]=4;
  //it stores both key values 3 & 4 as well

  //stack and Queues
  stack<int> stk;//LIFO DS
  //operations
  //top
  //push or emplace
  //pop
  //empty
  //size
  stk.push(1);
  stk.push(2);
  stk.push(3);
  stk.push(5);
  cout<<stk.size()<<endl;
  cout<<stk.top()<<endl;
  stk.pop();
  cout<<stk.size()<<" "<<stk.top()<<endl;
 // bool flag=stk.empty();
  //deleting all stack
  while (!stk.empty())
  {
      stk.pop();
  }
  cout<<stk.size()<<endl;
  //Queue //FIFO
  //push
  //front//all operation are of O(1)
  //pop
  //size
  //empty
  queue<int> q;
  q.push(1);
  q.push(4);
  q.pop(5);//q.front()--> 1
  cout<<q.size()<<endl;
  q.pop();
  while(!q.empty())
  {
      q.pop();
  }
  //Priority queue
  priority_queue<int> pq;
  pq.push(1);
  pq.push(3);
  pq.push(2);
  pq.push(5);
  pq.push(6);
  //6 5 3 2 1 where top=6
  priority_queue<pair<int,int>> pq1;
  pq1.push(1,3);
  pq1.push(1,6);
  pq1.push(1,4);
  /*
  1 6
  1 4
  1 3
  */
 //min priority queue
 priority_queue<int> pq2;
  pq2.push(-1);
  pq2.push(-3);
  pq2.push(-2);
  pq2.push(-5);
  pq2.push(-6);
  cout<<-1*pq2.top()<<endl;// 1
  /*
  -1 top
  -2
  -3
  -5
  -6
  */
 //same as
 //min priority queue
 priority_queue<int,vector<int>,greater<int>> pq3;
  pq3.push(1);
  pq3.push(3);
  pq3.push(2);
  pq3.push(5);
  pq3.push(6);
  cout<<pq3.top()<<endl;
  deque<int> dq;
  //its exactly similar to the vectors all the operations are also the same
  //push_front()
  //push_back()
  //pop_front()
  //pop_back()
  //begin,end,rend,rbegin
  //size 
  //at
  //clear,empty
  list<int> ls;
  //push_front()
  //push_back()
  //pop_front()
  //pop_back()
  //begin,end,rend,rbegin
  //size 
  //at
  //clear,empty
  //remove->O(1)
  ls.push_front(1);
  ls.push_front(2);
  ls.push_front(3);
  ls.remove(3);//O(1)
  //given N elements, print the elements occurs maximum times
  //input:5
  //1 3 3 3 2
  //output:3
  int n;
  cin>>n;
  map<int,int> map1;
  int mx=0;
  for(int i=0;i<n;i++)
  {
      int x;
      cin>>x;
      map1[x]++;
      if(map1[x]>mx)
      mx=x;
  }
cout<<x<<endl;
}