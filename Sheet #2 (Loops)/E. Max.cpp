#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,maximum=-1;
    long long k;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        cin>>k;
        if(maximum<k)
        {
            maximum=k;
        }
    }
    cout<<maximum;
    return 0;
}


