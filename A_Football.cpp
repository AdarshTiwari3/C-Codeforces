#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int x = 0,y = 0,flag=0;
    cin >> s;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] == '1')
        {
            x++;
            y = 0;
        }
        else if(s[i]=='0')
        {
            y++;
            x = 0;
        }
        if(x==7 || y==7)
        {
            flag=1;
        }
    }
    if(flag == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}