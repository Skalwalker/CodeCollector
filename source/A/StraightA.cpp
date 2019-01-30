/* Straight <<A>>

- URL: https://codeforces.com/contest/810/problem/A
- Tags:
  - implementation
  - math
  - 1000
*/

#include <bits/stdc++.h>

using namespace std;

int evaluate(float a){
    if(a -(long)a >= 0.5){
        return ceil(a);
    } else{
        return floor(a);
    }
}

int main(){

    vector<int> v;
    int n, k, n2, a, added = 0;
    float aux= 0, aux2=0;

    cin >> n >> k;
    n2 = n;
    while(n2--){
        cin >> a;
        v.push_back(a);
    }

    for(int i=0;i<v.size();i++){
        aux += v[i];
    }

    aux2 = aux / n;

    aux2 = evaluate(aux2);

    while(aux2 != k){
        aux += k;
        n += 1;
        aux2 = aux/n;
        aux2 = evaluate(aux2);
        added += 1;
    }

    cout << added << endl;

    return 0;
}
