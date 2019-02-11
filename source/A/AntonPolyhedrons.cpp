/* Anton and Polyhedrons

- URL: https://codeforces.com/problemset/problem/785/A
- Tags:
  - implementation
  - string
  - 600
*/

#include <bits/stdc++.h>

using namespace std;

int main () {

  int n, total = 0;
  string s;
  cin >> n;
  while(n--){
    cin >> s;
    if (s == "Tetrahedron") {total += 4;}
    else if (s == "Cube") {total += 6;}
    else if (s == "Octahedron") {total += 8;}
    else if (s == "Dodecahedron") {total += 12;}
    else if (s == "Icosahedron") {total += 20;}
  }

  cout << total << endl;

}
