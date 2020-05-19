#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,temp,r;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        temp=temp/10;
    }
    if(r%2==0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
    return 0;
}


