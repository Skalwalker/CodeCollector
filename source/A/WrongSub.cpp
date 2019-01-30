/* Wrong Subtraction

- URL: https://codeforces.com/contest/977/problem/A
- Tags:
  - implementation
  - 500
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k;

  cin >> n >> k;

  while(k--) {
    if (n % 10 == 0){
      n = n / 10;
    } else {
      n = n - 1;
    }
  }

  cout << n << endl;

}
