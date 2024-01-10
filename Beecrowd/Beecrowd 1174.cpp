//https://www.beecrowd.com.br/judge/en/problems/view/1174

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float a[100];
    
    for(int i=0;i<100;i++){
        
        cin>>a[i];
    }
    
    for(int i=0;i<100;i++){
        
        if(a[i]<10 || a[i]==10){
            
            cout<<fixed<<setprecision(1)<<"A["<<i<<"] = "<<a[i]<<endl;
        }
    }
}
