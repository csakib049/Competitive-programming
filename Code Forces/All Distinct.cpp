    //https://codeforces.com/problemset/problem/1692/B
    
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
     set<int>st;
    
    for(int i=0;i<n;i++){
      int a; cin>>a;
      st.insert(a);
    }    
    
     if((n-st.size())%2==0)cout<<st.size()<<endl;
     else cout<<st.size()-1<<endl;
     
   }
   
 }
    
    
     
