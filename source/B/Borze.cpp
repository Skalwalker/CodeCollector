/* Borze

- URL: https://codeforces.com/contest/32/problem/B
- Tags:
  - expression parsing
  - 900
  - implementation
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t;
    char c;
    string s;
    vector<int> out;

    std::getline(cin, s);

    for(int i = 0; i < s.size();i++){
        if(s[i] == '.'){
            cout << 0;
        } else if(s[i] == '-'){
            if(s[i+1] == '.'){
                cout << 1;
                i++;
            } else {
                cout << 2;
                i++;
            }
        }
    }

    cout << endl;

    return 0;

}
