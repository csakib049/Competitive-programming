//https://codeforces.com/contest/1807/problem/B

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
       int n,Mihai=0,Bianca=0;
       cin>>n;

        for(int i=0;i<n;i++) cin>>arr[i];

         for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                Mihai=Mihai+arr[i];

            }else if(arr[i]%2!=0){

               Bianca=Bianca+arr[i];
            }

         }

         if(Mihai>Bianca){

            cout<<"YES"<<endl;

         }else if(Mihai<Bianca){

            cout<<"NO"<<endl;

         }else if(Mihai==Bianca){

            cout<<"NO"<<endl;

         }

    }
}
