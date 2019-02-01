/* Lunar New Year and Number Division

- URL: https://codeforces.com/problemset/problem/1106/C
- Tags:
  - math
  - implementation
  - 1000
*/

#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main() {
  ll n, a, sum = 0;
  vector<ll> v;

  cin >> n;

  while (n--){
    cin >> a;
    v.push_back(a);
  }

  sort(v.begin(), v.end());

  for(int i = 0; i < v.size()/2; i++) {
    sum += pow((v[i] + v[v.size()-i-1]), 2);
  }

  cout << sum << endl;

}
