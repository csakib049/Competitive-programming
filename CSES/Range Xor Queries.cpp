//https://cses.fi/problemset/task/1650/
 
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\     
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
 const int MX=2e5+123;
 int arr[MX];
 int prefixsum[MX];

int main(){
  
  optimize();
 
   int n,query; cin>>n>>query;
   
   for(int i=1;i<=n;i++)cin>>arr[i];
   
   for(int i=1;i<=n;i++)prefixsum[i]=prefixsum[i-1]^arr[i];
 
   while(query--){
     int a,b; cin>>a>>b;
     
     cout<<(prefixsum[b]^prefixsum[a-1])<<endl;
     
   }
   return 0;
}
