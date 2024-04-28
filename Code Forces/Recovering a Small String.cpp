//https://codeforces.com/contest/1931/problem/A
 
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
 int t; cin>>t;
 while(t--){
   string s1="aa",s2="zz",s3="a",s4="z";
   string s="aabcdefghijklmnopqrstuvwxyz";
   int n; cin>>n;
   
   if(n<=28)cout<<s1<<s[n-2]<<endl;
   else if(n<=53)cout<<s3<<s[n-27]<<s4<<endl;
   else cout<<s[n-52]<<s2<<endl;
   
 }
   return 0;
}
