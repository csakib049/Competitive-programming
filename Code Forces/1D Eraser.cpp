//https://codeforces.com/contest/1873/problem/D

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
 


int main()
{
    optimize();
 int t; cin>>t;
  while(t--){
   int a,b; cin>>a>>b;
   string s; cin>>s;
   int cnt=0;
   for(int i=0;i<s.size();i++){
     if(s[i]=='B'){
       cnt++; i=i+(b-1);
       
     }
     
   }
   
    cout<<cnt<<endl;
    
    
  }
  
}
