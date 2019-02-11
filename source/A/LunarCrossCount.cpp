/* Lunar New Year and Cross Counting

- URL: https://codeforces.com/problemset/problem/1106/A
- Tags:
  - implementation
  - 800
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

  int n, count = 0;
  char a;

  cin >> n;
  int m[n][n];

  for(int i = 0; i<n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a;
      m[i][j] = a;
    }
  }

  for(int i = 1; i<n-1; i++) {
    for (int j = 1; j < n-1; j++) {
      if ((m[i][j] == 'X')&&(m[i-1][j-1] == 'X')&&(m[i-1][j+1] == 'X')&&(m[i+1][j-1] == 'X')&&(m[i+1][j+1] == 'X')){
        count += 1;
      }
    }
  }

  cout << count << endl;
}
