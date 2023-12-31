//https://www.beecrowd.com.br/judge/en/problems/view/1021

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    double money,a_mod=0,b_mod=0,c_mod=0,d_mod=0,e_mod=0,f_mod=0,g_mod=0,h_mod=0,i_mod=0,j_mod=0,k_mod=0,l_mod=0;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0;
    cin>>money;
    
    a=money/100;
    a_mod=money-(100*a);
    cout<<"NOTAS:"<<endl;
    cout<<a<<" nota(s) de R$ 100.00"<<endl;
    
  
  
    b=a_mod/50;
    b_mod=a_mod-(50*b);
    cout<<b<<" nota(s) de R$ 50.00"<<endl;
    
    c=b_mod/20;
    c_mod=b_mod-(20*c);
    cout<<c<<" nota(s) de R$ 20.00"<<endl;
    
    d=c_mod/10;
    d_mod=c_mod-(10*d);
    cout<<d<<" nota(s) de R$ 10.00"<<endl;
    
    e=d_mod/5;
    e_mod=d_mod-(5*e);
    cout<<e<<" nota(s) de R$ 5.00"<<endl;
    
    f=e_mod/2;
    f_mod=e_mod-(20*f);
    cout<<f<<" nota(s) de R$ 2.00"<<endl;
   
    g=f_mod/1;
    g_mod=f_mod-(1*g);
    cout<<"MOEDAS:"<<endl;
    cout<<g<<" moeda(s) de R$ 1.00"<<endl;
    
    h=g_mod/0.50;
    h_mod=g_mod-(0.50*h);
    cout<<h<<" moeda(s) de R$ 0.50"<<endl;
    
    i=h_mod/0.25;
    i_mod=h_mod-(0.25*i);
    cout<<i<<" moeda(s) de R$ 0.25"<<endl;
    
    j=i_mod/0.10;
    j_mod=i_mod-(0.10*j);
    cout<<j<<" moeda(s) de R$ 0.10"<<endl;
    
    k=j_mod/0.05;
    k_mod=j_mod-(0.05*k);
    cout<<k<<" moeda(s) de R$ 0.05"<<endl;
    
    l=k_mod/0.01;
    l_mod=k_mod-(0.01*l);
    cout<<l<<" moeda(s) de R$ 0.01"<<endl;
    




}
