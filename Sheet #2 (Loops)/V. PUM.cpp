#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=1;i<=4*n;i++)
    {
        if(i%4==0)
        {
            cout<<"PUM\n";
        }
        else{
            cout<<i<<" ";
        }
    }
    return 0;
}


