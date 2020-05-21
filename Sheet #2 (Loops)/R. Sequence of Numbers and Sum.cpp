#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int  n,m;
    do{
    cin>>n>>m;
    if(n<=0 || m<=0)
    {
        return 0;
    }
    if(n==m)
    {
        cout<<n<<" sum ="<<m<<"\n";
    }
    if(n>0 && m>0 )
    {
        int sum=0;
        if(n>m)
        {
            for(int i=m;i<=n;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"sum ="<<sum<<"\n";
        }
        if(m>n)
        {
            for(int i=n;i<=m;i++)
            {
                cout<<i<<" ";
                sum=sum+i;
            }
            cout<<"sum ="<<sum<<"\n";
        }

    }

    }while(true);

    return 0;
}


