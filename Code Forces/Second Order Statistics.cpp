//https://codeforces.com/problemset/problem/22/A

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
    
   set<int>st;
   
   int n; cin>>n;
   
   for(int i=0;i<n;i++){
     int a; cin>>a;
     st.insert(a);
   }
   
   if(st.size()==1)cout<<"NO"<<endl;
   else cout<<*(++st.begin())<<endl;
}
 
