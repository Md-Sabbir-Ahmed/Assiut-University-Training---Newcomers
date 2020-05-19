#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    char x;
    cin>>x;
    if((int)x>=97 && (int)x<=122)
    {
        cout<<(char)(x-32);
    }
    else if((int)x>=65 && (int)x<=90)
    {
        cout<<(char)(x+32);
    }
    return 0;
}


