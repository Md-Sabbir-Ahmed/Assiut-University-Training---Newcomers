#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,c;
    string s,q;
    cin>>a>>s>>b>>q>>c;
    if(s=="+")
    {
        if(a+b==c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a+b;
        }
    }
    else if(s=="-")
    {
        if(a-b==c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a-b;
        }
    }
    else if(s=="*")
    {
        if((a*b)==c)
        {
            cout<<"Yes";
        }
        else
        {
            cout<<a*b;
        }
    }
    return 0;
}


