/* Beautiful Year

- URL: https://codeforces.com/contest/271/problem/A
- Tags:
  - brute force
  - 900
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, number;

    cin >> n;

    while(true){


        n++;
        int mil = n / 1000;
        int cem = n / 100 % 10;
        int dez = n / 10 % 10;
        int uni = n % 10;

        // number = (1000 * mil)+(100*cem)+(dez*10)+uni;

        if((mil != cem)&&(mil != dez)&&(mil != uni)&&(cem != dez)&&(cem != uni)&&(dez != uni)){
            break;
        }
    }

    cout << n << endl;

    return 0;

}
