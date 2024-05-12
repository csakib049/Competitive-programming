//https://codeforces.com/contest/1971/problem/B
   
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
     
     
#include<bits/stdc++.h>
using namespace std;
     
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
     
     
int main(){
 optimize();
  
  int t; cin>>t;
  while(t--){
   string s; cin>>s;
   
   int ting=0;
   for(int i=1;i<s.size();i++){
     if(s[i]!=s[i-1]){
       swap(s[i],s[i-1]);
       ting =1;
     }
   }
    
    if(ting==1)cout<<"YES"<<endl<<s<<endl;
    else cout<<"NO"<<endl;
    
    
  }
}
