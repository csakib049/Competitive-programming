         //https://codeforces.com/problemset/problem/282/A
       
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
          int n,x=0; cin>>n;
          string s;
          for(int i=0;i<n;i++){
            cin>>s;
            if(s=="++X" || s=="X++"){
              x++;
            }else{
              x--;
            }
            
          }
       cout<<x<<endl;
       
        }
