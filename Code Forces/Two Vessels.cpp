//https://codeforces.com/contest/1872/problem/A


//================================================================================\\
//===========================( اللهم صّلِ وسَلّمْ عَلۓِ نَبِيْنَا مُحَمد ﷺ )=========================\\
//================================================================================\\


    #include <bits/stdc++.h>
    using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
    #define mem(a,b) memset(a,b,sizeof(a))
    #define endl "\n"

    int main() {
      optimize();

      int t;
      cin >> t;
      while (t--) {
        int a, b, c, x, y, moves = 0;

        cin >> a >> b >> c;

        if (a > b) {
          x = a;
          y = b;
        } else {
          x = b;
          y = a;
        }

        if (x == y) goto p;// Skip if already equal

        while (x > y) {
          x -= c;
          y += c;
          moves++;
        }
           p:
        cout << moves << endl;
      }
    }
