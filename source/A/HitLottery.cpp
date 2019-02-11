/* Hit the Lottery

- URL: https://codeforces.com/problemset/problem/996/A
- Tags:
  - dp
  - greedy
  - 600
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, soma = 0;
  int bills[] = {100, 20, 10, 5, 1};

  cin >> n;

  for (int i = 0; i < 5; i++) {
    if (n >= bills[i]) {
      soma += n / bills[i];
      n = n % bills[i];
    }
  }

  cout << soma << endl;


}
