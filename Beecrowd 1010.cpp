//https://www.beecrowd.com.br/judge/en/problems/view/1010
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    float code_of_p1,num_of_units_of_p1,code_of_p2,num_of_units_of_p2;
    
    float price1,price2;
    
    cin>>code_of_p1>>num_of_units_of_p1>>price1;
    cin>>code_of_p2>>num_of_units_of_p2>>price2;
    
    
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<(num_of_units_of_p1*price1)+(num_of_units_of_p2*price2)<<endl;
    
}
