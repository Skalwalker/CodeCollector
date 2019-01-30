/* Drinks

- URL: https://codeforces.com/contest/200/problem/B
- Tags:
  - implementation
  - 700
  - 500
*/

#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

int main(){

    int n, a1, n2;
    double sumOfAll = 0;

    cin >> n;
    n2 = n;
    while(n2--){
        cin >> a1;
        sumOfAll += a1;
    }

    cout << sumOfAll/(double)n << endl;

    return 0;

}
