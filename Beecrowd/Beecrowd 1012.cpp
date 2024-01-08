//https://www.beecrowd.com.br/judge/en/problems/view/1012

#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,d=0,e=0,f=0,g=0,h=0;
    
    cin>>a>>b>>c;
    
    d=0.5*a*c;
    e=3.14159*c*c;
    f=0.5*c*(a+b);
    g=b*b;
    h=a*b;
    
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<d<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<e<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<f<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<g<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<h<<endl;
    
}
