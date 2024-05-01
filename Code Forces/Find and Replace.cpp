//https://codeforces.com/contest/1807/problem/C

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
   
   bool ok=true;
   map<char,int>last;
   
   
   for(int i=0;i<n;i++){
     //last.find(s[i]) searches for the character s[i] in the last map. 
     
     if(last.find(s[i])==last.end()){
       last[s[i]]=i;
     }else{
       if((i-last[s[i]])%2!=0){  //odd
         ok=false;
         break;
       }
       last[s[i]]=i;
     }
   }
   
   if(ok==1)cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
   

 }
 
}
