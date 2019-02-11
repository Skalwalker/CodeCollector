/* On Corruption and Numbers

- URL: https://codeforces.com/problemset/problem/397/B
- Tags:
  - math
  - implementation
*/

#include <bits/stdc++.h>

using namespace std;

int main () {

  int ni, li, ri, n;

  cin >> n;

  while(n--){
      cin >> ni >> li >> ri;

      if((ni % ri == 0)||(ni % li == 0)) {
        cout << "Yes" << endl;
      } else if (ni % ri > 0) {
        int res = ni % ri;
         if (res % li == 0) {
           cout << "Yes" << endl;
         } else {
           cout << "No" << endl;
         }
      } else {
        cout << "No" << endl;
      }
  }



}
