#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  vector<int> t(n);
  int mx = 0, m2 = 0;
  for (int i = 0; i < n; i++) {
    cin >> s[i] >> t[i];
    mx = max(mx, s[i]);
  }
  for (int i = 0; i < n; i++) {
    if (mx == s[i]) s[i] = 0;
  }
  mx = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, s[i]);
  }
  for (int i = 0; i < n; i++) {
    if (mx == s[i]) {
      cout << t[i];
      return 0;
    }
  }
  return 0;
}