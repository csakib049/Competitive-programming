//https://codeforces.com/problemset/problem/1858/A
       
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
        
#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
         

int main(){
       optimize();
       
	int t; cin>>t;
	while(t--){
	int a,b,c; cin>>a>>b>>c;
	
	if(a>b)cout<<"First"<<endl;
	else if(b>a)cout<<"Second"<<endl;
	else if(a==b){
		if(c%2==0)cout<<"Second"<<endl;
		else cout<<"First"<<endl;
	   }	
		
	}
}