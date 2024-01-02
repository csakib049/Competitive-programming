//https://www.beecrowd.com.br/judge/en/problems/view/1048

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float n;
    cin>>n;
    
    if(0<n && n<=400.00){
        
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n+(n*15/100)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(n*15/100)<<endl;
        cout<<"Em percentual: 15 %"<<fixed<<setprecision(2)<<endl;
        
    }else if(400.01<=n && n<=800.00){
        
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n+(n*12/100)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(n*12/100)<<endl;
        cout<<"Em percentual: 12 %"<<fixed<<setprecision(2)<<endl;
        
    }else if(800.01<=n && n<=1200.00){
        
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n+(n*10/100)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(n*10/100)<<endl;
        cout<<"Em percentual: 10 %"<<fixed<<setprecision(2)<<endl;
        
    }else if(1200.01<=n && n<=2000.00){
        
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n+(n*7/100)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(n*7/100)<<endl;
        cout<<"Em percentual: 7 %"<<fixed<<setprecision(2)<<endl;
        
    }else if( 2000.00<n ){
        
        cout<<"Novo salario: "<<fixed<<setprecision(2)<<n+(n*4/100)<<endl;
        cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<(n*4/100)<<endl;
        cout<<"Em percentual: 4 %"<<fixed<<setprecision(2)<<endl;
        
    }
    
}
