//https://codeforces.com/problemset/problem/1606/A

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
     string s; cin>>s;
     
     if(s[0]!=s[s.size()-1]){
       
       s[0]=s[s.size()-1];
       
     }
     
     cout<<s<<endl;
     
   }
    
}
 
