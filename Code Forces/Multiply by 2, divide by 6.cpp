//https://codeforces.com/contest/1374/problem/B

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
     
     int cnt_2=0;
     int cnt_3=0;
     
     
     while(!(n%2)){
     	n=n/2;
     	cnt_2++;
     }
     
     
     while(!(n%3)){
        n=n/3;     	
     	cnt_3++;
     }
     
     
     if(n!=1 || cnt_2>cnt_3)cout<<"-1"<<endl;
     else cout<<(cnt_3-cnt_2)+cnt_3<<endl;
     
     
     }
}

