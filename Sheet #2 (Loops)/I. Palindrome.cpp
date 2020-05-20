#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,temp,r,rev=0;
    cin>>n;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    if(rev==n)
    {
        cout<<rev<<"\nYES\n";
    }
    else{
        cout<<rev<<"\nNO\n";
    }
    return 0;
}


