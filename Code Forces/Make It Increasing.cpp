//https://codeforces.com/problemset/problem/1675/B

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
    int n; cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    
    
    int cnt=0;
    for(int i=n-2;i>=0;i--){
      
      if(v[i+1]==0){
        
        cnt=-1;
        break;
        
      }
      
      while( v[i]>=v[i+1]){
        
        v[i]=v[i]/2;
        cnt++;
      }
    }
    
     cout<<cnt<<endl;
     
   }

}
 
