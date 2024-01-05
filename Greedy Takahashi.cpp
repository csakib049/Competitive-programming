//https://atcoder.jp/contests/abc149/tasks/abc149_b

#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    
    cin>>a>>b>>c;
    
    if(c<=a){
        
        cout<<a-c<<" "<<b<<endl;
        
    }else if(c>a && c<a+b){
        
        cout<<"0 "<<(a+b)-c<<endl;
        
    }else{
        
        cout<<"0 0"<<endl;
        
    }
}
