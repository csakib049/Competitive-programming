/https://www.beecrowd.com.br/judge/en/problems/view/1175

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[20],b[20];

    for(int i=0; i<20; i++)
    {

        cin>>a[i];
    }


    int i=19;

        for(int j=0; j<20; j++){


            b[j]=a[i--];

    }
    for(int i=0; i<20; i++)
    {

        cout<<"N["<<i<<"] = "<<b[i]<<endl;
    }

}
