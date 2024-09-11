//https://codeforces.com/problemset/problem/1380/A

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
     
     start:
     while(t--){
     	int n; cin>>n;
     	vector<int>v(n+1);
     	
     	 for(int i=1;i<=n;i++)cin>>v[i];
     	 
     	 
     	 for(int i=2;i<=n-1;i++){
     	 	if(v[i]>v[i-1] && v[i]>v[i+1]){      //v[i-1] < v[i] > v[i+1]
     	 		
     	 		cout<<"YES"<<endl;
     	 		cout<<i-1<<" "<<i<<" "<<i+1<<endl;
     	 		
     	 		goto start;
     	 	}	 	
     	 }
     	
     	
     	cout<<"NO"<<endl;
     }  
}
