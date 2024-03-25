//https://codeforces.com/problemset/problem/469/A

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
  int n; cin>>n;
  
  set<int>st;
  int x;
  cin>>x;
  for(int i=1;i<=x;i++){
    int p;
    cin>>p;
    st.insert(p);
  }
  
  int y;
  cin>>y;
  for(int i=1;i<=y;i++){
    int q;
    cin>>q;
    st.insert(q);
  }
  
  
 if(st.size()==n)cout<<"I become the guy."<<endl;
  else cout<<"Oh, my keyboard!"<<endl;
}
 
