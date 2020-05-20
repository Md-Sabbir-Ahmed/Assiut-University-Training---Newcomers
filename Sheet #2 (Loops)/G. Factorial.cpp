#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    long long n;
    cin>>t;
    while(t--)
    {
        long long fact=1;
        cin>>n;
        if(n==0)
        {
            cout<<1<<"\n";
            continue;
        }
        for(int i=n;i>=1;i--)
        {
            fact=fact*i;
        }
        cout<<fact<<"\n";
    }
    return 0;
}


