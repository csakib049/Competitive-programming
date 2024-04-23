//https://cses.fi/problemset/task/1646/
 
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\     
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
 const int MX=2e5+123;
 long long arr[MX];
 long long PrefixSum[MX];
 
int main(){
 
  optimize();
 
 long long n,query; cin>>n>>query;
 
 for(int i=1;i<=n;i++)cin>>arr[i];
 
 //Prefix_Sum:
 //---------------------------------------
 for(int i=1;i<=n;i++){
   PrefixSum[i]=PrefixSum[i-1]+arr[i];
 }
 
 //---------------------------------------
 
 for(int i=1;i<=query;i++){
   int a,b; cin>>a>>b;
   
   cout<<PrefixSum[b]-PrefixSum[a-1]<<endl;

 }
}
