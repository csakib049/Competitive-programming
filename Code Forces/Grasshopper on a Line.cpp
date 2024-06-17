//https://codeforces.com/contest/1985/problem/A

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
       int x,k; cin>>x>>k;
       
       if(k>x || x%k!=0){
           cout<<1<<endl;
           cout<<x<<endl;
       }else if(x%k==0){
           cout<<2<<endl;
           cout<<"1"<<" "<<(x-1)<<endl;
       }
        
        
    }
}
