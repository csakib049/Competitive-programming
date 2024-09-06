//https://codeforces.com/contest/2009/problem/C

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
    while (t--){
    	int x,y,k; cin>>x>>y>>k;
    	
    	x=(x+k-1)/k;
    	y=(y+k-1)/k;
    	
    	cout<<max(2*x-1,2*y)<<endl;
    	
    }
    
}
 