#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int d,m,y;
    y=n/365;
    m=(n%365)/30;
    d=((n%365)%30);
    cout<<y<<" years\n";
    cout<<m<<" months\n";
    cout<<d<<" days";
    return 0;
}


