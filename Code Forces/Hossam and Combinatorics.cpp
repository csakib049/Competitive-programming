      //https://codeforces.com/contest/1771/problem/A
      
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
           vector<int>v(n); 
           for(int i=0;i<n;i++)cin>>v[i];
          
          /*
            int MX_element=*max_element(v.begin(),v.end());
            int MN_element=*min_element(v.begin(),v.end());
          
          int differences=abs(MX_element-MN_element);
          
          int cnt=0;
          
          for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){                ////////Brute force (TLE)
              if(v[i]-v[j]==differences)cnt++;
            }
          }
          
          cout<<cnt*2<<endl;
           */
           
           
           long long MX_element=*max_element(v.begin(),v.end());
           long long MN_element=*min_element(v.begin(),v.end());
           long long MX_cnt=0,MN_cnt=0;
           
           
           for(int i=0;i<n;i++){
             if(v[i]==MX_element)MX_cnt++;
             if(v[i]==MN_element)MN_cnt++;
           }
           
           if(MN_element==MX_element){
             cout<<n*(n-1)<<endl;
           }else{
             cout<<2*MN_cnt*MX_cnt<<endl; 
           }
           
         }
      }
