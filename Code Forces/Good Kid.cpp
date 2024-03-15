//https://codeforces.com/contest/1873/problem/B

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;


int main(){
 int t; cin>>t;
 while(t--){
   int n; cin>>n;
   long long p=1;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   
   sort(v.begin(),v.end());
   
   v[0]=v[0]+1;
   
   for(int i=0;i<n;i++)p=p*v[i];
   
   cout<<p<<endl;

 }

}
