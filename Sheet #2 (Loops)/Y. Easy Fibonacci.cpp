#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,fib1,fib2,k;
    cin>>n;
    fib1=0;
    fib2=1;
    if(n==1)
    {
        cout<<fib1;
        return 0;
    }
    if(n==2)
    {
        cout<<fib1<<" "<<fib2;
        return 0;
    }
    cout<<fib1<<" "<<fib2<<" ";
    for(int i=3;i<=n;i++)
    {
        k=fib1+fib2;
        fib1=fib2;
        fib2=k;
        cout<<k<<" ";

    }
    return 0;
}


