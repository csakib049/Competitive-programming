//https://www.beecrowd.com.br/judge/en/problems/view/1165

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t,x;
    cin>>t;
    while(t--){
        cin>>x;
        
        int y=0,z=0;
            for(int i=2;i<x;i++){
                
                if(x%i==0){
                    
                    y=1;
                }else if(x%i!=0){
                    
                   z=1;
                    
                }
                
            }
        
        if(y==1){
            cout<<x<<" nao eh primo"<<endl;
            
        }else{
             cout<<x<<" eh primo"<<endl;
        }
    }
}



                    
                    
                    
                    
                    
