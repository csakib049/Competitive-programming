//https://codeforces.com/contest/1990/problem/A

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
     vector<int>freq;
     bool win=false;
    
     for(int i=0;i<n;i++){
       cin>>v[i];
       
       freq[v[i]]++;
     }

     for(auto u:freq){
       if(u%2!=0)win=true;
     }
     
     if(win=1)cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
     
   }
}



/*
frequency ber korte hobe 
frequency jodi odd kono element thake tahole  YES nahole NO
*/
 
