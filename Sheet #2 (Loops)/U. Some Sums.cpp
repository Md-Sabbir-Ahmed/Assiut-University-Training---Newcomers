#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b,temp,sum=0,sum2=0,r;
    cin>>n>>a>>b;

    for(int i=1;i<=n;i++){
     temp=i;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
     }
    if(sum>=a && sum<=b)
    {
        sum2=sum2+i;
    }
      sum=0;
    }
    cout<<sum2;
    return 0;
}


