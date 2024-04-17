//https://cses.fi/problemset/task/1069
 
//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\
 
 
#include<bits/stdc++.h>
using namespace std;
 
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define mem(a,b) memset(a,b,sizeof(a))
#define endl "\n"
 
 
int main() {
    string s;
    char current;
    int count = 0, answer = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != current) {
            current = s[i];
            count = 0;
        }
        if (s[i] == current) {
            count++;
        }
        answer = max(answer, count);
    }
    cout << answer;
}
