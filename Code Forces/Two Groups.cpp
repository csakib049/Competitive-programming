    //https://codeforces.com/contest/1747/problem/A
    
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
     long long n; cin>>n;
     vector<long long>v(n);
     for(int i=0;i<n;i++)cin>>v[i];
     
     long long  sum=0;
     
     for(int i=0;i<n;i++)sum+=v[i];
     
     cout<<abs(sum)<<endl;
     
   }
  }
    
    
     
