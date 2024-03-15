//https://codeforces.com/contest/1915/problem/B

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\

#include<bits/stdc++.h>
using namespace std;

int main(){
 int t; cin>>t;
 while(t--){
   string a,b,c;
   cin>>a>>b>>c;
   
   string summ=a+b+c;
   sort(summ.begin(),summ.end());
  
  
  int A=0,B=0,C=0;
  for(int i=0;i<summ.size();i++){
    if(summ[i]=='A')A++;
    if(summ[i]=='B')B++;
    if(summ[i]=='C')C++;
  }
  
  if(A==2){
    cout<<"A"<<endl;
  }else if(B==2){
    cout<<"B"<<endl;
  }else if(C==2){
    cout<<"C"<<endl;
  }

 }
}
