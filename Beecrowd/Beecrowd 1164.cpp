//https://www.beecrowd.com.br/judge/en/problems/view/1164

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
   cin>>t;
    
   while(t--){
        int x=0,sum=0;
        cin>>x;
        
        for(int i=1;i<x;i++){
            
            if(x%i==0){
                sum=sum+i;
                
            }
            
        }
        
       if(x==sum){
                cout<<x<<" eh perfeito"<<endl;
            }else if(x!=sum) {
                cout<<x<<" nao eh perfeito"<<endl;
                
            }
    }

}
