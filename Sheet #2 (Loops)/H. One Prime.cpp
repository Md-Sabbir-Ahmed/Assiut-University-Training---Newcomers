#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x,r=0;
    cin>>x;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            r++;
        }
    }
    if(r==0)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}


