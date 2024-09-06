//https://codeforces.com/contest/2009/problem/B

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);


bool allelementsequal(const vector<int>& vec) {
    if (vec.empty()) return true; // An empty vector is considered to have all equal elements
    return std::all_of(vec.begin(), vec.end(), [first = vec[0]](int element) {
        return element == first;
    });
}


 
int main()
{
    optimize();
    int t; cin>>t;
    while(t--){
    	vector<int>v;
    	int tt; cin>>tt;
    	while(tt--){
    		string s; cin>>s;
    		
    		for(int i=0;i<5;i++){
    			if(s[i]=='#'){
    				v.push_back(i+1);
    			}
    		}
    		
    	}
    	
    	    reverse(v.begin(),v.end());
    		
    		for(auto u:v)cout<<u<<" ";
    		
    		cout<<endl;
    }
}
 