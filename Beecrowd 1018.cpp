//https://www.beecrowd.com.br/judge/en/problems/view/1018

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int money,a=0,a_mod=0,b=0,b_mod=0,c=0,c_mod=0,d=0,d_mod=0,e=0,e_mod=0,f=0,f_mod=0,g=0,g_mod=0;
    cin>>money;
    
    
    cout<<money<<endl;
    
    a=money/100;
    a_mod=money%100;
    cout<<a<<" nota(s) de R$ 100,00"<<endl;
    
    b=a_mod/50;
    b_mod=a_mod%50;
    cout<<b<<" nota(s) de R$ 50,00"<<endl;
    
    c=b_mod/20;
    c_mod=b_mod%20;
    cout<<c<<" nota(s) de R$ 20,00"<<endl;
    
    d=c_mod/10;
    d_mod=c_mod%10;
    cout<<d<<" nota(s) de R$ 10,00"<<endl;
    
    e=d_mod/5;
    e_mod=d_mod%5;
    cout<<e<<" nota(s) de R$ 5,00"<<endl;
    
    f=e_mod/2;
    f_mod=e_mod%2;
    cout<<f<<" nota(s) de R$ 2,00"<<endl;
    
    g=f_mod/1;
    g_mod=f_mod%1;
    cout<<g<<" nota(s) de R$ 1,00"<<endl;
    
}
