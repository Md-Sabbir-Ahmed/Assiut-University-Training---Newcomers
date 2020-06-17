#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    string s;
    while(t--)
    {
        cin>>s;
        int k=s.size();
        for(int i=k-1;i>=0;i--)
        {
            cout<<s[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}


