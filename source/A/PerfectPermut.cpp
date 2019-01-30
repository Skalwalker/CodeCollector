/* Perfect Permutation

- URL: https://codeforces.com/contest/233/problem/A
- Tags:
  - implementation
  - math
  - 800
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;

    cin >> n;

    if(n%2 != 0){
        cout  << -1;
    } else {
        for(int i = 1; i <= n;i+=2){
            if(i == 1){
                cout << 2 * i << " ";
            } else {
                cout << 2 * (i-(i/2)) << " ";
            }


            cout << i << " ";
        }
    }

    cout << endl;


    return 0;
}
