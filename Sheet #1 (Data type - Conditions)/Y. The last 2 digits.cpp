#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long a,b,c,d,x;
    cin>>a>>b>>c>>d;
    x=((a%100)*(b%100)*(c%100)*(d%100))%100;
    if(x<10)
    {
        cout<<0<<x;
    }
    else{
        cout<<x;
    }

    return 0;
}


