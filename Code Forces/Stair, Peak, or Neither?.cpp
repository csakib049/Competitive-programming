   //https://codeforces.com/contest/1950/problem/A
   
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
          vector<int>v(3);
          for(int i=0;i<3;i++)cin>>v[i];
          
          if(v[0]<v[1] && v[1]<v[2])cout<<"STAIR"<<endl;
          else if(v[0]<v[1] && v[1]>v[2])cout<<"PEAK"<<endl;
          else cout<<"NONE"<<endl;
        }
    }
