//https://cses.fi/problemset/task/1094

#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+123;
long long a[mx];

int main()
{
    long long n,x,cnt=0;

    cin>>n;

    for(int i=0; i<n; i++)cin>>a[i];

    for(int i=1; i<n; i++)
    {
        if(a[i]<a[i-1])
        {
            x=a[i-1]-a[i];
            cnt+=x;
            a[i]=a[i-1];
        }
    }
    cout<<cnt<<endl;
}
