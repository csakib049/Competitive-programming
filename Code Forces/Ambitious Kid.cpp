//https://codeforces.com/problemset/problem/1866/A

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx=1e5+123;
int a[mx];

int main()
{
    optimize();

    int n; cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  
  int ans=*max_element(v.begin(),v.end());
  
  for(int i=0;i<v.size();i++){
    ans=min(ans,abs(v[i]-0));
    
  }
  
  if(ans<0)cout<<(-1)*ans<<endl;
  else cout<<ans<<endl;
  
 // cout<<abs(ans-0)<<endl;
}
