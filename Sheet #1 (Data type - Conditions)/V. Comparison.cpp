#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    char s;
    cin>>a>>s>>b;
    if(s=='=')
    {
        if(a==b)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    if(s=='>')
    {
        if(a>b)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    if(s=='<')
    {
        if(a<b)
        {
            cout<<"Right";
        }
        else{
            cout<<"Wrong";
        }
    }
    return 0;
}


