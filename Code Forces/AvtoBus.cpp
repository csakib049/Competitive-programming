//https://codeforces.com/problemset/problem/1679/A

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
     long long n; cin>>n;
        
     long long MX,MN;

        if(n%2!=0 || n<4){
            cout<<"-1"<<endl;
             
        }else{            

            MN=n/6;  //min
          
            if(n%6!=0)MN++;
            
            MX=n/4; //max

            
            cout<<MN<<" "<<MX<<endl;
        }

        
   }
}
//https://www.youtube.com/watch?v=yLULFRZRQNM
 
