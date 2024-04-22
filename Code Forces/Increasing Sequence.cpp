//https://codeforces.com/problemset/problem/1882/A

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
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   
  int x=1;
  for(int i=0;i<n;i++){
    if(v[i]==x){
      x++;
    }
    x++;
  }
  cout<<x-1<<endl;
  
  
 }
 
}
