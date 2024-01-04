/*
Write a program which will take a positive integer as input, calculate its factorial and print it.

Sample Input:               Sample Output:
5                          120
Sample Input:              Sample Output:
10                         3628800

*/


//Task 1:
#include<bits/stdc++.h>
using namespace std;

int main(){

long int  n,i,t=1;

cin>>n;

for( i=n;i>=1;i--){


   t=t*i;

}

cout<<t<<endl;

}
