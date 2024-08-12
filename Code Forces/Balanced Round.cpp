//https://codeforces.com/problemset/problem/1850/D

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
     int k; cin>>k;
     vector<int>v(n);
     for(int i=0;i<n;i++)cin>>v[i];

        sort(v.begin(),v.end());

        int MX=0,cnt=0;
        for(int i=1;i<n;i++){
            if(abs(v[i]-v[i-1])<=k){
                cnt++;
            MX=max(MX,cnt);
            }else{
                cnt=0;
            }
        }

       

        cout<<n-MX-1<<endl;
        
    }
}
 
