/* Twisted Circuit

- URL: https://codeforces.com/contest/784/problem/E
- Tags:
  - special problem
  - brute code
  - implementation
  - 2000
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    bool a, b, c, d, e;

    cin >> a >> b >> c >> d;

    e = (((a!=b) && (c||d)) != ((b && c) ||  (a != d)));

    if(e) cout << 1;
    else cout << 0;

    return 0;

}
