#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
       int arr[n];
       long long  sum=0;
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];

       }
       for(int i=0;i<n;i++)
       {
           sum=sum+arr[i];
       }
       cout<<abs(sum);

    return 0;
}


