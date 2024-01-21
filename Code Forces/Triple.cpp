//https://codeforces.com/contest/1669/problem/B

#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+123;
int a[mx];

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long n,cnt=0;
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];

        }

        long y=0;
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(a[i]==a[j])
                {
                    cnt++;
                }
                if(cnt>=3)
                {
                    y=a[i];
                }


            }
        }

        if(cnt>=3)
        {

            cout<<y<<endl;

        }
        else
        {
            cout<<"-1"<<endl;
        }

    }
}
