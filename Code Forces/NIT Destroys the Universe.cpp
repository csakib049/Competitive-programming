//https://codeforces.com/problemset/problem/1696/B

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
     vector<int>v(n+1);
     for(int i=1;i<=n;i++)cin>>v[i];
     
     
     if(v.size()==1 && v[0]!=0){
       cout<<"1"<<endl;
       continue;
     }
     
     
     int cnt=0;
     
     for(int i=1;i<=n;i++){
       
       if(v[i-1]==0 && v[i]!=0)cnt++;
      
     }
     
     
     //ans
     cnt=min(cnt,2);
     cout<<cnt<<endl;
     
     
   }
}
 
