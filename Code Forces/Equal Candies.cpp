//https://codeforces.com/contest/1676/problem/B

#include<bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

const int mx=1e5;
int a[mx];

int main()
{
    optimize();

int t ;
cin>>t;
while(t--){
    int  n,i,sum=0;
    cin>>n;

    for(int i=0;i<n;i++)cin>>a[i];

    int min=a[0];

     for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];

        }
     }

     for(int i=0;i<n;i++){
        sum+=a[i];
     }
     int x=min*n;
     cout<<sum-x<<endl;



}


}
