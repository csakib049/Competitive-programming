#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; cin>>t;
    while(t--){
        int n,k,p; cin>>n>>k>>p;

        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());


        //for varun cz he gets all chair except for the tallest one 
        int sum=0;
        for(int i=0;i<n-1;i++)sum+=v[i];

        //varun's height 
        p=p+sum; 


        //ved's height
        k=k+v[n-1];


        if(p==k)cout<<"Equal"<<endl;
        else if(k>p)cout<<"Ved"<<endl;
        else cout<<"Varun"<<endl;


    }


}
