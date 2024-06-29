//https://codeforces.com/problemset/problem/1788/A
 
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
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    
    bool found=false;
    int left_count=0;
    int right_count=count(v.begin(),v.end(),2);
    for(int i=0;i<n;i++){
     
        if(v[i]==2){
          left_count++;
          right_count--;
        }
     
        if(left_count==right_count){
          found=true;
          cout<<i+1<<endl;
          break;
        }
       }
    
    if(found==0)cout<<"-1"<<endl;
  }
}
