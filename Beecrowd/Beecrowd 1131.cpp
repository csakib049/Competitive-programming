//https://www.beecrowd.com.br/judge/en/problems/view/1131


#include<bits/stdc++.h>
using namespace std;

   int main()
{
    int a[2],Inter=0,Gremio=0,grenais=0,Empates=0,x;

    p:
    for(int i=0;i<2;i++){
        cin>>a[i];
    }

    if(a[0]>a[1]){

        Inter++;

    }else if(a[0]<a[1]){

        Gremio++;

    }else if (a[0]==a[1]){

        Empates++;
    }

    cout<<"Novo grenal (1-sim 2-nao)"<<endl;
    cin>>x;

    if(x==1){

        grenais++;
        goto p;

    }else if (x==2){

       if(Inter==Gremio){

        cout<<"Não houve vencedor"<<endl;

       }else if(Inter!=Gremio){

       cout<<grenais+1<<" grenais"<<endl;

       }
       cout<<"Inter:"<<Inter<<endl;
       cout<<"Gremio:"<<Gremio<<endl;
       cout<<"Empates:"<<Empates<<endl;

       if(Inter>Gremio){

        cout<<"Inter venceu mais"<<endl;

       }else if(Inter<Gremio){

        cout<<"Gremio venceu mais"<<endl;

       }

       return 0;
    }


}



