//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N

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
  char a; cin>>a;
  
  
  if(a>='A' && a<='Z'){
    char b=a+32;           //32 + korle lowercase hobe
    cout<<b<<endl;
  }else if(a>='a' && a<='z'){
    char b=a-32;          //32 - korle uppercase hobe
    cout<<b<<endl;
  }
  
}
 
