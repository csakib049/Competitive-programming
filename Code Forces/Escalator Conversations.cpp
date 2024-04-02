    //https://codeforces.com/problemset/problem/1851/A

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
          int n,m,k,h; cin>>n>>m>>k>>h;
          int a; int cnt=0;
          vector<int>v(n);
          for(int i=0;i<n;i++){
              cin>>v[i];
            if(abs(v[i]-h)%k==0 && abs(v[i]-h)/k>0 && abs(v[i]-h)/k<m)cnt++;
          }
          cout<<cnt<<endl;
        }
    }
