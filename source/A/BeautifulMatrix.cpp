/* Beautiful Matrix

- URL: https://codeforces.com/contest/263/problem/A
- Tags:
  - implementation
  - 700
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int mat[5][5];
    int posx, posy, count = 0;

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> mat[i][j];
            if(mat[i][j] == 1){
                posx = i;
                posy = j;
            }
        }
    }

    count = abs(posx - 2) +  abs(posy - 2);

    cout << count << endl;

}
