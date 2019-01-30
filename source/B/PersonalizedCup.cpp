/* Personalized Cup

- URL: https://codeforces.com/problemset/problem/1032/B
- Tags:
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

  string s;
  int i = 1;
  int column;

  cin >> s;

  // cout << s.length();

  column = ceil(s.length() / (i*1.0f));
  while (column > 20){
    i++;
    column = ceil(s.length() / (i*1.0f));
  }

  int ast = (column * i) - s.length();
  int astcp = ast;
  int ast_print = 0;

  cout << i << ' ' << column << endl;

  int astperline = ceil(ast/(i*1.0f));

  bool linefill = false;

  for(int j=0;j<s.length()+astcp;j++) {
    if (j % column == 0){cout<<endl; linefill = false;}
    if ((ast > 0)&&(linefill == false)){
      int ammount = 0;
      while((ammount < astperline)&&(ast > 0)){
        cout << '*';
        ast -= 1;
        ast_print += 1;
        ammount += 1;
        linefill = true;
      }
    } else {
      cout << s[j-ast_print];
    }
  }

  cout << endl;
}
