//https://codeforces.com/contest/2000/problem/B

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
    vector<int>v1(n+1);
    vector<int>v2(n+2);

     for(int i=1;i<=n;i++)cin>>v1[i];
    
     bool ok=true;
     v2[v1[1]]=v1[1];   

        for(int i=2;i<=n;i++){
            v2[v1[i]]=v1[i];
            if(v2[v1[i]-1]>0 || v2[v1[i]+1]>0)ok=true;
            else{
                ok=false;
                break;
            }
        }
        

        if(ok==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}


//solve:
//https://www.youtube.com/watch?v=BZO93OBcHwM
 
