/* Word

- URL: https://codeforces.com/contest/59/problem/A
- Tags:
  - implementation
  - string
  - 800
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int minc = 0, maxc = 0;

    cin >> s;

    for(int i = 0; i < s.size();i++){
        if(s[i] < 'a'){
            maxc += 1;
        } else {
            minc += 1;
        }
    }

    if(minc < maxc) { transform(s.begin(), s.end(), s.begin(), ::toupper); }
    else { transform(s.begin(), s.end(), s.begin(), ::tolower); }

    cout << s << endl;

    return 0;
}
