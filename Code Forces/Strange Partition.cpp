//https://codeforces.com/problemset/problem/1471/A

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
     	long long n,k; cin>>n>>k;
     	
     	vector<int>v(n);
     	long long MX=0,MN=0;
     	
     	for(int i=0;i<n;i++){
     		cin>>v[i];
     	   
     	   MN=MN+(v[i]);  //for minimum
     		
      	   MX=MX+(v[i]+k-1)/k; //for maximum
     		
     	    
     	}
     	
     	
     	
     	 MN=(MN+k-1)/k;
     	
     	cout<<MN<<" "<<MX<<endl;
     	
     	
     }
}

