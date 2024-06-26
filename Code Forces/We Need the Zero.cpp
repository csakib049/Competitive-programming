//https://codeforces.com/problemset/problem/1805/A

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
     vector<int>v(n);
     int ans=0;
     for(int i=0;i<n;i++){
       cin>>v[i];
       ans=ans^v[i];
     }
     
     if(n%2!=0)cout<<ans<<endl;
     else if(ans==0)cout<<ans<<endl;
     else cout<<"-1"<<endl;
     
   }
  
}
 
