//https://codeforces.com/problemset/problem/1853/A

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
   int n; cin>>n;
   vector<int>v(n); for(int i=0;i<n;i++)cin>>v[i];
   
   int MN=INT_MAX;
   if(is_sorted(v.begin(),v.end())){
     
     for(int i=1;i<n;i++){
       
       MN=min(MN,v[i]-v[i-1]);
       
     }
     cout<<(MN/2)+1<<endl;  //Formula: (l-r)/2+1  ;
     
   }else{
     cout<<"0"<<endl;
   }
    
  }
}
