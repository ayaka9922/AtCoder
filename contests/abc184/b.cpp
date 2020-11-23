#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, x;
  string s;
  cin >> n >> x >> s;
  int ans = x;
  for (int i = 0; i < n; i++) {
    if (s[i] == 'o') {
      ans += 1;
    }
    if (s[i] == 'x' && ans > 0) {
      ans -= 1;
    }
  }
  cout << ans << endl;
  return 0;
}