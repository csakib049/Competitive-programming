    //https://codeforces.com/problemset/problem/146/A

    //================================================================================\\
    //===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
    //================================================================================\\
     
     
    #include<bits/stdc++.h>
    using namespace std;
     
    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
    #define mem(a,b) memset(a,b,sizeof(a))
    #define endl "\n"
     
     
    int main()
    {
        optimize();
     
       int n; cin>>n;
       string s; cin>>s;
       
       vector<int>v(n); //vector
       for(int i=0;i<n;i++){
         
          v[i]=s[i]-'0';
         
       }

     int sum1=0,sum2=0,ting=0,ping=0;
     
     for(int j=0;j<n/2;j++){
            sum1=sum1+v[j];
          }
          
     for(int p=v.size()-1;p>(n/2)-1;p--){
            sum2=sum2+v[p];
          }
     
      for(int i=0;i<n;i++){
        if(v[i]==4 || v[i]==7)ting++;

      }       
       
       if(ting==n && sum1==sum2)cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
     
    }
