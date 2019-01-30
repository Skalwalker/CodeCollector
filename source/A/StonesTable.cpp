/* Stones on the Table

- URL: https://codeforces.com/contest/266/problem/A
- Tags:
  - implementation
  - 800
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int n, counter = 0;

    cin >> n;
    cin >> s;

    for(int i = 0; i < n; i++){
        if(s[i+1] == s[i]){
            counter++;
        }
    }

    cout << counter << endl;

    return 0;
}
