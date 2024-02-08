//https://www.beecrowd.com.br/judge/en/problems/view/1241

//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();

  int t;
  cin>>t;
  while(t--){

      string s1,s2;
      cin>>s1>>s2;

      if(s1.size()<s2.size()){

        cout<<"nao encaixa"<<endl;

      }else if(s1==s2){

        cout<<"encaixa"<<endl;

      }else if(s1.find(s2)){

        cout<<"encaixa"<<endl;

      }else{

        cout<<"nao encaixa"<<endl;

      }


  }
    return 0;
}
