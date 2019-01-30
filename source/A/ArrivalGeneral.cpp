/* Arrival of the General

- URL: https://codeforces.com/contest/144/problem/A
- Tags:
  - implementation
  - 900
*/

#include <bits/stdc++.h>

using namespace std;

#define INF 1e9

int main(){

    int n, maior = 0, menor = INF, a1, maiorPos = 0, menorPos = 0, n2;
    int counter = 0;

    cin >> n;
    n2 = n;

    while(n2--){
        cin >> a1;
        if(a1 > maior){
            maior = a1;
            maiorPos = counter;
        }
        if(a1 <= menor){
            menor = a1;
            menorPos = counter;
        }
        counter++;
    }

    // cout << maiorPos;

    if(maiorPos > menorPos){
        cout << maiorPos-1 + abs(menorPos - n)-1 << endl;
    } else {
        cout << maiorPos-1 + abs(menorPos - n)<< endl;
    }

    return 0;
}
