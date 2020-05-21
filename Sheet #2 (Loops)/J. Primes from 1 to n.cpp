#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int j=2;j<=n;j++){

    int x,r=0;
    x=j;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            r++;
        }
    }
    if(r==0)
    {
        cout<<x<<" ";
    }
    }
    return 0;
}
