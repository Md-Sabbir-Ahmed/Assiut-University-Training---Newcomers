#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b;
    char c;
    cin>>a>>c>>b;
    if(c=='+')
    {
        cout<<a+b;
    }
    else if(c=='-')
    {
        cout<<a-b;
    }
    else if(c=='*')
    {
        cout<<a*b;
    }
    else if(c=='/')
    {
        cout<<a/b;
    }
    return 0;
}

