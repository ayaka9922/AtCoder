#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  string s[h];
  for (int i = 0; i < h; i++) {
    cin >> s[i];
  }
  int ans = 1;
  for (int i = y - 1; i >= 0; i--) {
    if (s[x - 1][i] == '.') {
      ans++;
    } else {
      break;
    }
  }
  for (int i = y - 1; i < w; i++) {
    if (s[x - 1][i] == '.') {
      ans++;
    } else {
      break;
    }
  }
  for (int i = x - 1; i >= 0; i--) {
    if (s[i][y - 1] == '.') {
      ans++;
    } else {
      break;
    }
  }
  for (int i = x - 1; i < h; i++) {
    if (s[i][y - 1] == '.') {
      ans++;
    } else {
      break;
    }
  }
  ans -= 4;
  cout << ans << endl;
  return 0;
}
