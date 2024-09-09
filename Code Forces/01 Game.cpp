//https://codeforces.com/problemset/problem/1373/B

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
     	
     	string s; cin>>s; 
     	int n=s.size();
     	
     	int zero=0,one=0;
     	for(int i=0;i<n;i++){
     		
     		if(s[i]=='0')zero++;
     		
     		if(s[i]=='1')one++;
     		
     	}
     	
     	
     	//if all the elements are same
     int SZ=unique(s.begin(),s.end())-s.begin();
     
     if(SZ==1){
     	cout<<"NET"<<endl;
     	continue;
     }
     	
     	
     	if(zero<one){
     		
     		one=zero;
     		
     	}else{
     		zero=one;
     		
     	}
     	
     	
     	
     	int ans=(zero+one)/2;
     	
     	if(ans%2!=0)cout<<"DA"<<endl;
     	else cout<<"NET"<<endl;
     	
     	
     	
     }  
}

