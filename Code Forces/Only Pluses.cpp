//https://codeforces.com/contest/1992/problem/A

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
    vector<int>v(3);
    for(int i=0;i<3;i++)cin>>v[i];
    
    for(int i=0;i<5;i++){
      sort(v.begin(),v.end());
      v[0]++;
      
    }
    
    cout<<v[0]*v[1]*v[2]<<endl;
    
  }

}
 
