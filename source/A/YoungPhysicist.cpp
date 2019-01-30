/* Young Physicist

- URL: https://codeforces.com/contest/69/problem/A
- Tags:
  - implementation
  - 1100
  - math
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, a1, a2, a3, out1= 0, out2 = 0, out3 = 0;

    cin >> n;

    while(n--){
        cin >> a1 >> a2 >> a3;
        out1 += a1;
        out2 += a2;
        out3 += a3;
    }

    if((out1==0)&&(out3==0)&&(out2==0)){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
