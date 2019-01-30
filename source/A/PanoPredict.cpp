/* Panoramix's Prediction

- URL: https://codeforces.com/contest/80/problem/A
- Tags:
  - brute force
  - 900
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    int n, m, prime = 0, flag = 0;

    cin >> n >> m;

    prime = n;

    for(int i = n+1; i <= m;i++){
        for(int j = 1; j <= i;j++){
            if(j != 1 && j != i){
                if(i % j == 0){
                    flag = 0;
                    break;
                } else {
                    flag = 1;
                }
            }
        }
        if(flag == 1){
            prime = i;
            break;
        }
    }

    if(prime == m){ cout << "YES" << endl;}
    else {cout << "NO" << endl;}

    // cout << prime << endl;

    return 0;
}
