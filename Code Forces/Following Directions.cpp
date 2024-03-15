//https://codeforces.com/contest/1791/problem/B

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;


int main(){
int t; cin>>t;
while(t--){
  int x=0,y=0,ting=0;
  int n; cin>>n;
  string s; cin>>s;

  for(int i=0;i<s.size();i++){
    
    if(s[i]=='U')y++;
    if(s[i]=='R')x++;
    
    if(s[i]=='L')x--;
    if(s[i]=='D')y--;

    if(x==1 && y==1)ting=1;    //ting
     
     
  }
  
   if(ting==1){
     cout<<"YES"<<endl;
   }
     else {
       cout<<"NO"<<endl;
     }
     
   }
}
