/* Ultra-Fast Mathematician

- URL: https://codeforces.com/contest/61/problem/A
- Tags:
  - implementation
  - 900
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string s, s2;
    int n, m, prime = 0, flag = 0;

    cin >> s >> s2;

    for(int i = 0; i<s.size();i++){
        int si1 = s[i] - '0';
        int si2 = s2[i] - '0';
        int aux = si1 ^ si2;
        cout << aux;
    }
    cout << endl;

    return 0;
}
