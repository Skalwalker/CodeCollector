/* In Search of an Easy Problem

- URL: https://codeforces.com/problemset/problem/1030/A
- Tags:
  - implementation
  - 500
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, l, flag = 0;

  cin >> n;

  while(n--) {
    cin >> l;
    if (l == 1) {
      flag = 1;
    }
  }

  if (flag == 1) {cout << "HARD" << endl;}
  else {cout << "EASY" << endl;}
}
