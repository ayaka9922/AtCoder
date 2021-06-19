#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  double r, x, y;
  cin >> r >> x >> y;
  double dst = sqrt((ll)x * x + y * y);
  if (dst == r) {
    cout << 1;
  } else if (dst < r) {
    cout << 2;
  } else {
    int ans = ceil(dst / r);
    cout << ans;
  }
  return 0;
}