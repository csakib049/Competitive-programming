    //https://codeforces.com/contest/1988/problem/A
     
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
        int n,k; cin>>n>>k;
     
          if(n==1){
              cout<<"0"<<endl;
          }else{
     
           int cnt=0;
              k--;
              while(n>=2){
                  n=n-k;
                  cnt++;
              }
     
              cout<<cnt<<endl;
              
          }
     
      }
    }
     
