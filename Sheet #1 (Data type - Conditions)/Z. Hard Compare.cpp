#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    double a,b,c,d,x,y;
    cin>>a>>b>>c>>d;
    x=b*log(a);
    y=d*log(c);

    if(x>y){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}


