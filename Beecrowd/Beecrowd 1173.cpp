//https://www.beecrowd.com.br/judge/en/problems/view/1173

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    long long a[10],x;
    cin>>x;
   
    cout<<"N[0] = "<<x<<endl;
    for(int i=0;i<9;i++){
        
        x=x*2;
       cout<<"N["<<i+1<<"] = "<<x<<endl; 
    }
    
}
