//https://atcoder.jp/contests/arc087/tasks/arc087_a

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
  
  int n; cin>>n;
  map<int,int>mp;
  
  for(int i=0;i<n;i++){
    int x; cin>>x;
    mp[x]++;
  }
  
  int cnt=0;
  
  for(auto u:mp){
    if(u.second >u.first){
      cnt=cnt+(u.second-u.first);
    }else if( u.first>u.second){
      cnt=cnt+u.second;
    }
  }
  
  cout<<cnt<<endl;
}
