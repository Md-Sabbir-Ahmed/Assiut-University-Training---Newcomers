#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int i=n;i>=1;i--)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i)-1;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    return 0;
}



