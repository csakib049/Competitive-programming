//https://codeforces.com/problemset/problem/1777/A

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
    int ODD=0,EVEN=0,MX=0;
    vector<int>v(n); 
    for(int i=0;i<n;i++) cin>>v[i];
    
       for(int i=1;i<n;i++){
         if( v[i-1]%2==0 && v[i]%2==0 ){ //for even
           EVEN++;
       
         }
      
         if(v[i-1]%2!=0 && v[i]%2!=0){  //for odd
           ODD++;
        
         }
       }   
 
    cout<<EVEN+ODD<<endl;
  }
}


/*  different parity means the array has to be 
    [ even,odd,even,odd,odd,even,odd ] like this 
*/
 
