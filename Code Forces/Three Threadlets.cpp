//https://codeforces.com/problemset/problem/1881/B

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
    cin>>v[0]>>v[1]>>v[2];
    
    sort(v.begin(),v.end());
    int cnt=0;
    
    while(cnt<3 && v[2]>v[0]){
      
      cnt++;
      v[2]=v[2]-v[0];
      
      if(v[2]<v[1])swap(v[2],v[1]);
      
    }
    
    
    if(v[0]!=v[1] || v[1]!=v[2])cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    
    
    }
}
 
