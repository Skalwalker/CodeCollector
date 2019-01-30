/* Nineteen

- URL: https://codeforces.com/problemset/problem/393/A
- Tags:
  - implementation
  - 700
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;

  int nAmt = 0, iAmt = 0, eAmt = 0, tAmt = 0, final = 0;

  cin >> s;

  for(int i=0;i<s.length();i++){
    if (s[i] == 'n') {nAmt += 1;}
    else if (s[i] == 'i') {iAmt += 1;}
    else if (s[i] == 'e') {eAmt += 1;}
    else if (s[i] == 't') {tAmt += 1;}
    if ((nAmt >= 3)&&(iAmt >= 1)&&(eAmt >= 3)&&(tAmt >= 1)) {final +=1; nAmt -= 2; iAmt -= 1; eAmt -= 3; tAmt -= 1;}
  }

  cout << final << endl;
}
