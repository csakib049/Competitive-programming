//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F
 
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\     
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
 
int main(){
  int t; cin>>t;
  
  while(t--){
    string s; cin>>s;
    
    if(s.size()<=10) cout<<s<<endl;
    else cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
  
  }
}
