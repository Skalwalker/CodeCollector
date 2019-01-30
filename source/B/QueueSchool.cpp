/* Queue at the School

- URL: https://codeforces.com/contest/266/problem/B
- Tags:
  - implementation
  - 900
  - graph matchings
  - shortest path
  - constructive algorithms
*/

#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, t;
    char c;
    vector<char> v;


    cin >> n >> t;

    while(n--){
        cin >> c;
        v.push_back(c);
    }

    while(t--){
        for(int i = 0; i < v.size();i++){
            if((v[i] == 'B')&&(v[i+1] == 'G')){
                v[i] = 'G';
                v[i+1] = 'B';
                i++;
            }
        }
    }

    for(int i = 0; i < v.size();i++){
        cout << v[i];
    }

    cout << endl;

    return 0;

}
