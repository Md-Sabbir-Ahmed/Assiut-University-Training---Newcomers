#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,ans=-1;
    cin>>n;
    m=n;
    int arr[n];
    int i=0;
    while(n--)
    {
        cin>>arr[i];
        i++;
    }
    int t;
    cin>>t;
    for(int j=0;j<m;j++)
    {
        if(arr[j]==t)
        {
            ans=j;
            break;
        }
    }
    cout<<ans;
    return 0;
}


