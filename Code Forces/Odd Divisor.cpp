//https://codeforces.com/problemset/problem/1475/A

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
   	
      	long long n; cin>>n;
   	
   	   if((n&(n-1))==0){   // if(n==2 power number)
      		cout<<"NO"<<endl;
   		  
   		  
      	}
      	else {
     		cout<<"YES"<<endl;
     	}
   	
   }
}

//https://www.youtube.com/watch?v=2LlsfyG6IH8
//watch Bit Manipulation Series(Bangla)
