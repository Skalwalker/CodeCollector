/* Mahmoud and Ehab and the even-odd game

- URL: https://codeforces.com/problemset/problem/959/A
- Tags:
  - games
  - math
  - 600
*/


#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  string res;

  cin >> n;

  if (n % 2 != 0) {res = "Ehab";}
  else {res = "Mahmoud";}

  cout << res << endl;
}
