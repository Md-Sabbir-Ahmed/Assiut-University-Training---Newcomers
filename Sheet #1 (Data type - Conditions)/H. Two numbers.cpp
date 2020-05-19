#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float a,b,c;
    cin>>a>>b;
    c=a/b;
    cout<<"floor "<<a<<" / "<<b<<" = "<<floor(c)<<"\n";
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(c)<<"\n";
    cout<<"round "<<a<<" / "<<b<<" = "<<round(c)<<"\n";


    return 0;
}


