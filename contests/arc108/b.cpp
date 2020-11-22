#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<char> s(n);
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for (int i = 0; i < n - 2; i++) {
    if (s[i] == 'f') {
      for (int j = i + 1; j < n - 1; j++) {
        if (s[j] == 'o') {
          for (int k = j + 1; k < n; k++) {
            if (s[k] == 'x') {
              s[i] = '0';
              s[j] = '0';
              s[k] = '0';
            }
          }
        }
      }
    }
  }
  for (int i = 0; i < n; i++) {
    cout << s[i] << endl;
  }
  return 0;
}