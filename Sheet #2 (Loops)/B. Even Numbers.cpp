#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        if(i%2==0)
        {
            cout<<i<<"\n";
            x++;
        }
    }
    if(x==0)
    {
        cout<<-1;
    }
    return 0;
}


