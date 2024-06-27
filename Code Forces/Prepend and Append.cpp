     //https://codeforces.com/contest/1791/problem/C

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
         string s; cin>>s;
         
     	while (s[0] != s[s.size()-1] && s.size() > 0) {
     	  
     	  s.erase(s.begin());
     	  s.pop_back();
     	  
     	  
     	}
     	     	
	   cout << s.size() <<endl;
         
       }
    }
