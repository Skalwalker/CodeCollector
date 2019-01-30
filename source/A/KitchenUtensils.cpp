/* Kitchen Utensils

- URL: https://codeforces.com/contest/1032/problem/A
- Tags:

*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k, a;
	map<int, int> m;
	cin >> n >> k;

  int n2 = n;
	while(n--){
		cin >> a;
		m[a] += 1;
	}

  int max = 0;
  for (const auto &p : m){
    if (p.second > max) {
      max = p.second;
    }
  }

  int omawe = ceil(max / (k*1.0f));
  cout << ((omawe * m.size() * k) - n2) << endl;



}
