#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  int ans = 1000000;
  if (a == b) ans = x;
  if (a > b) {
    int f = a - b;
    if (2 * x < y) {
      ans = x * (f * 2 - 1);
    } else if (x == y) {
      ans = f * x;
    } else {
      ans = (f - 1) * y + x;
    }
  }
  if (a < b) {
    int f = b - a;
    ans = min(x * (f * 2 + 1), x + f * y);
  }
  cout << ans << endl;
  return 0;
}
