/* Bear and Big Brother

- URL: https://codeforces.com/problemset/problem/791/A
- Tags:
  - implementation
  - 600
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

  int a, b, t = 0;

  cin >> a >> b;

  while (a <= b) {
    a = a * 3;
    b = b * 2;
    t += 1;
  }

  cout << t << endl;

}
