//https://www.beecrowd.com.br/judge/en/problems/view/1066

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int a[5],t=0,u=0,v=0,w=0;
    
    for(int i=0;i<5;i++)cin>>a[i];
    
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            t++; // even
        }else{
            u++; //odd
        }
        
       if(a[i]>0){
           v++; //positive
       }else if(a[i]<0){
           w++; //negative
       }
    }
  cout<<t<<" valor(es) par(es)"<<endl;
  cout<<u<<" valor(es) impar(es)"<<endl;
  cout<<v<<" valor(es) positivo(s)"<<endl;
  cout<<w<<" valor(es) negativo(s)"<<endl;
  
}
