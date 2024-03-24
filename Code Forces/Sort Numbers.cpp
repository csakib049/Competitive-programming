//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/T

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
 
 vector<int>v(3);
 vector<int>v1(3);
   
   for(int i=0;i<3;i++)cin>>v[i];
   
   for(int i=0;i<3;i++){
     
     v1[i]=v[i];
   }
   
   sort(v.begin(),v.end());
   
   for(int i=0;i<3;i++)cout<<v[i]<<endl;
 
   cout<<endl;
   
   for(int i=0;i<3;i++)cout<<v1[i]<<endl;
}
