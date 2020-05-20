#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c,d[3];
    cin>>a>>b>>c;
    d[0]=a;
    d[1]=b;
    d[2]=c;
    sort(d,d+3);
    cout<<d[0]<<"\n";
    cout<<d[1]<<"\n";
    cout<<d[2]<<"\n";
    cout<<"\n";
    cout<<a<<"\n";
    cout<<b<<"\n";
    cout<<c<<"\n";
    return 0;
}

