/* Word Capitalization

- URL: https://codeforces.com/contest/281/problem/A
- Tags:
  - strings
  - 800
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int minc = 0, maxc = 0;

    cin >> s;

    s[0] = toupper(s[0]);

    cout << s << endl;

    return 0;
}
