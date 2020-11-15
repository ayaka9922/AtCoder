#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  double sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;
  double ans = 0;
  ans = ((sy * gx) + (sx * gy))/ (sy + gy);
  printf("%.9f", ans);
  return 0;
}