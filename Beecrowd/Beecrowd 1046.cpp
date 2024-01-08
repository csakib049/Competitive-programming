//https://www.beecrowd.com.br/judge/en/problems/view/1046

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a,b,t=0;
    
    cin>>a>>b;
    
   
    
     if(a<b){
         
         for(int k=a+1;k<=b;k++){
             t++;
         }
         
     }else{
         
          for(int i=a+1;i<=24;i++){
        t++;
    }
    
    for(int j=1;j<=b;j++){
        t++;
    }
  }    
    
    cout<<"O JOGO DUROU "<<t<<" HORA(S)"<<endl;
    
    
}
