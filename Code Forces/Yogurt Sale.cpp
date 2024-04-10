    //https://codeforces.com/contest/1955/problem/A
   
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
          int n,a,b; cin>>n>>a>>b;
          
          if(b>a*2)cout<<n*a<<endl;
          else {
            cout<<(n/2)*b+(n%2)*a<<endl;
          }

         }

    }
