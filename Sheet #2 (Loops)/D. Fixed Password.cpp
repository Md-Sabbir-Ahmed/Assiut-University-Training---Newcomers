#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int x=1999;
    int n;
     do{
        cin>>n;
        if(n==x)
        {
            cout<<"Correct\n";
            break;
        }
        if(n!=x){
            cout<<"Wrong\n";
            continue;
        }
    }while(n!=x);
    return 0;
}


