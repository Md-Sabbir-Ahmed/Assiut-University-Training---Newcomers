#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,x;
    int even=0,odd=0,positive=0,negative=0;
    cin>>n;
    while(n--)
    {
        cin>>x;
        if(x%2==0)
        {
            even++;
        }
        if(x%2!=0)
        {
            odd++;
        }
        if(x>0)
        {
            positive++;
        }
        if(x<0)
        {
            negative++;
        }
    }
    cout<<"Even: "<<even<<"\n";
    cout<<"Odd: "<<odd<<"\n";
    cout<<"Positive: "<<positive<<"\n";
    cout<<"Negative: "<<negative<<"\n";
    return 0;
}


