//https://www.beecrowd.com.br/judge/en/problems/view/1134

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int x,Alcohol=0, Gasoline=0, Diesel=0;



for(;;){

        start:
        cin>>x;

    if(x==1){

        Alcohol++;

    }else if(x==2){

        Gasoline++;

    }else if(x==3){

         Diesel++;

    }else if(x==4){

         goto f;

    }else if(x==0 || x<0 || x>4){

         goto start;

    }
}
   f:
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<Alcohol<<endl;
    cout<<"Gasolina: "<<Gasoline<<endl;
    cout<<"Diesel: "<<Diesel<<endl;


    return 0;
 }

