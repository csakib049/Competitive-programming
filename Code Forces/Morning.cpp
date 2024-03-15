    //https://codeforces.com/problemset/problem/1883/A
     
    //================================================================================\\
    //===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
    //================================================================================\\
     
    #include<bits/stdc++.h>
    using namespace std;
     
    int main(){
      int t; cin>>t;
      while(t--){
        
        string str; cin>>str;
        int a=str[0]-'0';
        int b=str[1]-'0';
        int c=str[2]-'0';
        int d=str[3]-'0';
      
        
        if(a==0)a=10;
        if(b==0)b=10;
        if(c==0)c=10;
        if(d==0)d=10;
        
        int tim=abs(1-a);
        tim+=abs(a-b);
        tim+=abs(b-c);
        tim+=abs(c-d);
        
        
        cout<<tim+4<<endl;
     
      }
     
    }
