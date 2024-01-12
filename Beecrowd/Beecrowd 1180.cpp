//https://www.beecrowd.com.br/judge/en/problems/view/1180

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;

    cin>>n;

    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int min=a[0],position;

    for(int i=0; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
            position=i;
        }
    }

    cout<<"Menor valor: "<<min<<endl;
    cout<<"Posicao: "<<position<<endl;


}
