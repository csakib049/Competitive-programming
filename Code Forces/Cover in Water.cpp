//https://codeforces.com/problemset/problem/1900/A


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
  int n; cin>>n; 
  string s; cin>>s;
  
  int k=count(s.begin(),s.end(),'.');
  
  int ans=k;
  
  for(int i=0;i<n;i++){
     if(s.substr(i,3)=="..."){
       ans=2;
       break;
     }
  }
  
  cout<<ans<<endl;
  }
}
/*
ANS:  jodi por por 3ta dot thake tahole ans 2 r na hole joto gula dot ase toto gula hobe ans

*/
