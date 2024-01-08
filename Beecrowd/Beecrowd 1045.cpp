//https://www.beecrowd.com.br/judge/en/problems/view/1045

#include<bits/stdc++.h>
using namespace std;

int main(){

    double x,y,z,a,b,c,num1,num2,num3;

    cin>>num1>>num2>>num3;



    if (num1 > num2) {
        swap(num1, num2);
    }
    if (num2 > num3) {
        swap(num2, num3);
    }
    if (num1 > num2) {
        swap(num1, num2);
    }

   a=num3;
   b=num2;
   c=num1;




    if(a>= b + c){

        cout<<"NAO FORMA TRIANGULO"<<endl;
    }else if(a*a == b*b + c*c){

        cout<<"TRIANGULO RETANGULO"<<endl;
    }else if(a*a > b*b + c*c){

        cout<<"TRIANGULO OBTUSANGULO"<<endl;
    }else if(a*a < b*b + c*c){

        cout<<"TRIANGULO ACUTANGULO"<<endl;
    }



    if(a==b && b==c){

        cout<<"TRIANGULO EQUILATERO"<<endl;

    }else if( a==b || b==c || a==c){

        cout<<"TRIANGULO ISOSCELES"<<endl;
    }



}
