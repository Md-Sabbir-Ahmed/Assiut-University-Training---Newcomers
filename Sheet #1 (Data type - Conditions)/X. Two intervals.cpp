#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if((l2>l1 && r1<l2) || l1>r2)
    {
    	cout<<-1<<"\n";
    }
    else
    {
    	cout<<max(l1,l2)<<" "<<min(r1,r2)<<"\n";
    }
    return 0;
}

