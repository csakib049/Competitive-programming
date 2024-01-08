//https://www.beecrowd.com.br/judge/en/problems/view/1043

#include<bits/stdc++.h>
using namespace std;

int main(){
    
 float a,b,c,s=0,triangle=0,trapezium=0;
 
 cin>>a>>b>>c;
 
 if((a+b)>c && (b+c)>a && (a+c)>b ){
     
     
     triangle=a+b+c;
     
     cout<<"Perimetro = "<<fixed<<setprecision(1)<<triangle<<endl;
 }else{
     
     trapezium=((a+b)*c)/2;
     
     cout<<"Area = "<<fixed<<setprecision(1)<<trapezium<<endl;
     
 }
        
    
    
    
    
}
