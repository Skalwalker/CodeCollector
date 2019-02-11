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

  int n, soma = 0, soma2 = 0;
  string a;
  char start;
  cin >> n;
  cin >> a;

  for(int i = 0; i < n; i++){
    if(i>=1){
      if ((start == 'S')&&(a[i] == 'F')){soma += 1;}
      if ((start == 'F')&&(a[i] == 'S')){soma2 += 1;}
      start = a[i];
    } else {
      start = a[i];
    }
  }

  if(soma>soma2){cout << "YES" << endl;}
  else {cout << "NO" << endl;}

}
