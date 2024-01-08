//https://www.beecrowd.com.br/judge/en/problems/view/1020

#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int x,year=0,month=0,day=0;
    cin>>x;
    
    year=x/365;
    x=x-(365*year);
    
    cout<<year<<" ano(s)"<<endl;
    
    month=x/30;
    x=x-(30*month);
    
    cout<<month<<" mes(es)"<<endl;
    
    day=x;
    
    cout<<day<<" dia(s)"<<endl;

}
