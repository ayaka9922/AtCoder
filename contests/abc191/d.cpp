#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  double x, y, r;
  cin >> x >> y >> r;
  ll ans = 0;
  x *= 10;
  y *= 10;
  r *= 10;
  double mn = y, mx = y;
  double n = x - r;
  for (int i = 0; i < r; i += 10) {
    i += x - r;
    if (((mx + 10) - y) * ((mx + 10) - y) <= r * r - (i - x) * (i - x)) {
      mx += 10;
    }
    if (((mn - 10) - y) * ((mn - 10) - y) <= r * r - (i - x) * (i - x)) {
      mn -= 10;
    }
    ans += (mx - mn) / 10 + 1;
  }
  cout << mx << endl << mn << endl;
  double d = x * 10;
  for (int i = 0; i < r; i += 10) {
    i += x;
    if ((double)((mn + 1) - y) * ((mn + 1) - y) <= r * r - (i - x) * (i - x)) {
      mn += 10;
    }
    if ((double)((mx - 1) - y) * ((mx - 1) - y) <= r * r - (i - x) * (i - x)) {
      mx -= 10;
    }
    ans += (mn - mx) / 10 + 1;
  }

  cout << ans;
  return 0;
}