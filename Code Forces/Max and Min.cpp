//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
 
 const int mx=3;
 int a[mx];
 
int main()
{
    optimize();
   
   for(int i=0;i<3;i++)cin>>a[i];
   
   cout<<*min_element(a,a+3)<<" "<<*max_element(a,a+3)<<endl;
}
