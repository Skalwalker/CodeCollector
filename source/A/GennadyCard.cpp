/* Gennady and a Card Game

- URL: https://codeforces.com/problemset/problem/1097/A
- Tags:
  - implementation
  - brute force
  - 600
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  string s1, a;
  int flag = 0;

  cin >> s1;

  for(int i = 0; i < 5; i++) {
    cin >> a;
    if ((a[0] == s1[0]) || (a[1] == s1[1])) {flag = 1;}
  }

  if (flag == 1){cout << "YES" << endl;}
  else {cout << "NO" << endl;}
}
