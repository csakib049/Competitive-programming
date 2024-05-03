//https://cses.fi/problemset/task/1660/
//https://cses.fi/problemset/task/1661/

//Same ans for both question



//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\     

#include<bits/stdc++.h>
using namespace std;

const int MX=2e5+123;
long long a[MX];
long long prefixsum[MX];

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main(){

  optimize();
 
 long long n,x; cin>>n>>x;
 
 for(int i=1;i<=n;i++)cin>>a[i];
 
 for(int i=1;i<=n;i++)prefixsum[i]=prefixsum[i-1]+a[i];
 
 
//------------------------------------- 
 map<long long,int>mp_cnt;
 long long ans=0;
 mp_cnt[0]=1;
 
 
 for(int i=1;i<=n;i++){      //Loop: O(n)
   long long sumMinus=prefixsum[i]-x;
   ans=ans+mp_cnt[sumMinus];      //Map:  O(log2(n))
   mp_cnt[prefixsum[i]]++;
 }
 
 //Time complexity: O(nlog2(n))

//-------------------------------------
 
 cout<<ans<<endl;
 return 0;
}
