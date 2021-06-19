#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  double x, y, z;
  cin >> x >> y >> z;
  double xx = y / x;
  double p = xx * z;
  double yy = 0;
  p--;
  while (p / z > xx) {
    p--;
  }
  int ans = ceil(p);
  cout << ans;
  return 0;
}