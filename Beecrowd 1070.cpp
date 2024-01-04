//https://www.beecrowd.com.br/judge/en/problems/view/1070

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,t=0;
    
    cin>>n;
    
     if(n%2==0){
         
        for(int i=n+1;i<=1000;i+=2){
         cout<<i<<endl;  

        t++;
        
        if(t==6){
            
            break;
        }
         }
       
     }else if(n%2!=0){
         
         for(int i=n;i<=1000;i+=2){
         cout<<i<<endl; 
         
        t++;
        
        if(t==6){
            
            break;
        }
        
        
         } 
       
     }
     
     
 
}


