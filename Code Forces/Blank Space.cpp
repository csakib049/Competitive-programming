//https://codeforces.com/contest/1829/problem/B

#include<bits/stdc++.h>
using namespace std;

const int mx=1e5+123;
int arr[mx];

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"


int main()
{
    optimize();

    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       int cnt=0,x=0,ans=0;
        for(int i=0;i<n;i++) cin>>arr[i];

        for(int i=0;i<n;i++){
            if(arr[i]==0){
                cnt++;

            }else if(arr[i]==1){
                ans = max(ans, cnt);
                cnt = 0;

            }

        }


     cout<<max(ans, cnt)<<endl;

    }
}
