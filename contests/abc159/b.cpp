#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int n = s.length();
  for (int i = 0; i < n/2; i++) {
    if (s[0 + i] != s[n - 1 - i]) {
      cout << "No" << endl;
      return 0;
    }
  }
  for (int i = 0; i < n/4; i++) {
    if (s[0 + i] != s[(n - 2) / 2 - i]) {
      cout << "No" << endl;
      return 0;
    } else if (s[(n + 2) / 2 + i] != s[n - 1 - i]) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}