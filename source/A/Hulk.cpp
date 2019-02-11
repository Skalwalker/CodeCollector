/* Hulk

- URL: https://codeforces.com/problemset/problem/705/A
- Tags:
  - implementation
  - 600
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

  int i, flag = 0;

  cin >> i;


  while (i--) {
    if (flag == 0) {cout << "I hate"; flag = 1;}
    else {cout << "I love"; flag = 0;}
    if (i != 0) {cout << " that ";}
  }

  cout << " it" << endl;
}
