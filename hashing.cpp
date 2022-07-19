#include<bits/stdc++.h>
using namespace std;
int hsh[26],in;
void Charcount(string str)
{
    for(int i=0;i<str.size();i++)
    {
        int in=str[i]-97;
        //cerr<<in<<endl;
        hsh[in]++;
    }
    for(int i=0;i<26;i++)
    {
        if(hsh[i]!=0)
        cout<<(char)(i+97)<<":"<<hsh[i]<<endl;
    }

}
bool ispermu(string s,string str)
{
   for(int i=0;i<str.size();i++)
    {
        int in=str[i]-97;
        hsh[in]++;
    }
    for(int i=0;i<s.size();i++)
    {
        int in=str[i]-97;
        hsh[in]--;
    }
    for(int i=0;i<26;i++)
    {
        if(hsh[i]!=0) 
        return false;
        
    }
    return true;
}
void wordcount(string str)
{
    int c=0,f=1;
    for(int i=0;i<str.size();i++)// this  is  adarsh
    {
        if(str[i]==' ')
        f=1;
        else if(f==1)
        {
            f=0;
            c++;
        }
        
    }
   cout<<c<<endl;
    
}
/*int wordcount2(string s)
{
    int c=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ' && s[i-1]!=' ')
        c++;
    }
    return c;
} */
string removedupli(string s)
{
    string str="";
    str+=s[0];
    for(int i=1;i<=s.size()-1;i++)
    {
        if(s[i]!=s[i+1])
        str+=s[i+1];
    }
    return str;
}
int main()
{
    string str,s;
    //getline(cin,str);
    //getline(cin,s);
    /*Charcount(str);
    if(ispermu(str,s)==0)
    cout<<"String is permutable\n";
    else cout<<"String is not permutable\n"; */
    //wordcount(str);
    //cout<<wordcount2(s)<<endl;
    cin>>s;
    cout<<removedupli(s)<<endl;

}