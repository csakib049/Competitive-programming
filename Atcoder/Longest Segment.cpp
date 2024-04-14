    //https://atcoder.jp/contests/abc234/tasks/abc234_b

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
    int n; cin>>n;
    int mx=132;
    vector<int>v1(mx);
    vector<int>v2(mx);
    
    for(int i=0;i<n;i++)cin>>v1[i]>>v2[i];
    
    double M=0;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        int x1=v1[i];
        int y1=v2[i];
        
        int x2=v1[j];
        int y2=v2[j];
        
        double dis=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));

        M=max(M,dis);    // if(M<dis)M=dis;

      }
    }
    cout<<fixed<<setprecision(10)<<M<<endl;
    }
