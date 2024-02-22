//https://codeforces.com/problemset/problem/1914/A

        #include <bits/stdc++.h>
        #define ll long long
        #define pb push_back
        #define ff first
        #define ss second
        #define mp make_pair
        #define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
        using namespace std;
        const ll mod=1e9+7;
         
        int main()
        {   
            #ifndef ONLINE_JUDGE
            freopen("input1.txt", "r", stdin);
            freopen("/Users/sreejith/Desktop/output.txt", "w", stdout);
            #endif
            ll t;
            cin>>t;
            while(t--){
                string s;
                ll n;
                cin>>n;
                ll cnt = 0;
                cin>>s;
                vector < ll > arr(27);
                for(ll i = 0 ; i < n ; i++) {
                    arr[s[i]-'A']++;
                    if(arr[s[i]-'A'] == (s[i]-'A'+1)) {
                        cnt++;
                    }
                }
                cout<<cnt<<endl;
            }
            return 0;     
         }
