//https://codeforces.com/contest/1915/problem/C

#include<bits/stdc++.h>
using namespace std;

const int mx=2e5+123;
long arra[mx];

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,cnt=0,perfectnum;
        cin>>n;


        for(int i=0;i<n;i++)cin>>arra[i];



        for(int i=0;i<n;i++){
            cnt+=arra[i];
        }


        perfectnum=sqrt(cnt);


        if(sqrt(cnt)==perfectnum){
            cout<<"YES"<<endl;
        }else {
            cout<<"NO"<<endl;
        }



    }
}
