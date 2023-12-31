//https://www.beecrowd.com.br/judge/en/problems/view/1036

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    double A,B,C,R1,R2;
    
    cin>>A>>B>>C;
    
    if(A<=0 || B<=0 || C<=0 || ((B*B)-(4*A*C))<0 ){
        
        cout<<"Impossivel calcular"<<endl;
        
    }else{
        
        R1=(-B+sqrt((B*B)-(4*A*C)))/(2*A);
        
        cout<<"R1 = "<<fixed<<setprecision(5)<<R1<<endl;
        
        R2=(-B-sqrt((B*B)-(4*A*C)))/(2*A);
        
        cout<<"R2 = "<<fixed<<setprecision(5)<<R2<<endl;
    
        
    }
    
}
