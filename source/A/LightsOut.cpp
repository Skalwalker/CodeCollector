/* Lights Out

- URL: https://codeforces.com/contest/275/problem/A
- Tags:
  - implementation
  - 1000
*/

#include <bits/stdc++.h>

using namespace std;

int power[3][3] = {{1, 1, 1},{1, 1, 1},{1, 1 ,1}};


int main(){

    int n, number;
    int p[3][3];

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> p[i][j];
            while(p[i][j]--){
                if(power[i][j] == 0){power[i][j] = 1;} else {power[i][j] = 0;}
                if(j+1 < 3){
                    if(power[i][j+1] == 0){power[i][j+1] = 1;} else {power[i][j+1] = 0;}
                }
                if(i+1 < 3){
                    if(power[i+1][j] == 0){power[i+1][j] = 1;} else {power[i+1][j] = 0;}
                }
                if(i-1 >= 0){
                    if(power[i-1][j] == 0){power[i-1][j] = 1;} else {power[i-1][j] = 0;}
                }
                if(j-1 >= 0){
                    if(power[i][j-1] == 0){power[i][j-1] = 1;} else {power[i][j-1] = 0;}
                }
            }
        }
    }

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << power[i][j];
        }
        cout << endl;
    }

    return 0;

}
