#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (i % 2 == 0) {
      if (s[i] != 'R' && s[i] != 'U' && s[i] != 'D') {
        cout << "No" << endl;
        return 0;
      }
    }
    if (i % 2 == 1) {
      if (s[i] != 'L' && s[i] != 'U' && s[i] != 'D') {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}