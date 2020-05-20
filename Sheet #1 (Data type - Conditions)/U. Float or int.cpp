#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    float n;
    cin>>n;
    if(n==(int)n)
    {
        cout<<"int "<<n;
    }
    else{
        cout<<"float "<<(int)n<<" "<<fixed<<setprecision(3)<<n-(int)n;
    }
    return 0;
}


