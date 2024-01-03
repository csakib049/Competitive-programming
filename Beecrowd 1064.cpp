//https://www.beecrowd.com.br/judge/en/problems/view/1064

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float a[6],b,sum=0;
    
    for(int i=0;i<6;i++){
        
        cin>>a[i];
    }
    
     for(int i=0;i<6;i++){
       if(a[i]>0) {
            
            b++;
        }
    }
    cout<<b<<" valores positivos"<<endl;
    
     for(int i=0;i<6;i++){
       if(a[i]>0) {
            
            sum=sum+a[i]/b;
        }
    }
    cout<<sum<<fixed<<setprecision(1)<<endl;
    
}
