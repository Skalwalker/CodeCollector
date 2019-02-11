
#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main () {
  ll b, k, soma = 0, a;

  cin >> b >> k;

  while (k--){
    cin >> a;
    soma += a * (pow(b, k));
  }

  if (soma % 2 == 0) {cout << "even" << endl;}
  else {cout << "odd" << endl;}

}
