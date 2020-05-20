#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int sum=0;
        int x,y;
        cin>>x>>y;
        if(x<y)
        {
            for(int i=x+1;i<y;i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
        }
        if(x>y)
        {
            for(int i=y+1;i<x;i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}


