#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  string t;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != 'R') {
      t.push_back(s[i]);
    } else {
      reverse(t.begin(), t.end());
    }
    cout << t;
    cout << endl;
  }

  for (int i = 0; i < t.length() * 4; i++) {
    for (int j = 0; j < t.length() - 1; j++) {
      if (t[j] == t[j + 1]) {
        t.erase(t.begin() + j + 1);
        t.erase(t.begin() + j);
      }
    }
  }

  for (int i = 0; i < s.length(); i++) {
    cout << i << ":" << t[i] << endl;
  }
  cout << endl;
  return 0;
}