//https://codeforces.com/problemset/problem/1862/B

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
int main()
{
    optimize();
   int t; cin>>t;
   while(t--){
    int n; cin>>n;
    vector<int>v(n),v1;
     for(int i=0;i<n;i++)cin>>v[i];
     
     v1.push_back(v[0]);
     
     for(int i=1;i<n;i++){
       if(v[i-1]>v[i]){
         v1.push_back(v[i]);
         v1.push_back(v[i]);
       }else{
         v1.push_back(v[i]);
       }
       
     }
     
     cout<<v1.size()<<endl;
     for(auto u:v1)cout<<u<<" ";
     
     
     cout<<endl;
     
   }
}
 
