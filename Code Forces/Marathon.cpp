//https://codeforces.com/contest/1692/problem/A

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\

#include<bits/stdc++.h>
using namespace std;

int main(){
 
 int t; cin>>t;
 while(t--){
   vector<int>v(4);
   for(int i=0;i<4;i++)cin>>v[i];
   
   int marathon=0;
    
      if(v[0]<v[1])marathon++;
      if(v[0]<v[2])marathon++;
      if(v[0]<v[3])marathon++;
      
      cout<<marathon<<endl;
 }
 

}
