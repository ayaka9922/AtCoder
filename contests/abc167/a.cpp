#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s, t;
  cin >> s >> t;

  t.pop_back(); //末尾の文字消去

  if (s == t){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;

  return 0;
}