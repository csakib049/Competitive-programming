//https://www.beecrowd.com.br/judge/en/problems/view/1038

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int p,q ;
    cin>>p>>q;
    
    switch (p){
        case 1:
       cout<<"Total: R$ "<<fixed<<setprecision(2)<<(4.00*q)<<endl;
       break;
        case 2:
       cout<<"Total: R$ "<<fixed<<setprecision(2)<<(4.50*q)<<endl;
       break;
        case 3:
       cout<<"Total: R$ "<<fixed<<setprecision(2)<<(5.00*q)<<endl;
       break;
        case 4:
       cout<<"Total: R$ "<<fixed<<setprecision(2)<<(2.00*q)<<endl;
       break;
        case 5:
       cout<<"Total: R$ "<<fixed<<setprecision(2)<<(1.50*q)<<endl;
       break;
    
    }
   
}
