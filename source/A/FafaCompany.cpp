/* Fafa and his Company

- URL: https://codeforces.com/problemset/problem/935/A
- Tags:
  - implementation
  - brute force
  - 600
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, n2, soma = 0;

  cin >> n;

  n2 = n;

  while (n2--) {
    if(n % (n2+1) == 0) {
      soma += 1;
    }
  }

  cout << soma-1 << endl;
}
