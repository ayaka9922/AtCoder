#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, h, m;
  cin >> a >> b >> h >> m;
  double ans = 0;
  double pi = 3.141592653589793;

  double hh = (h * 60 + m) * pi / 360;


  ans = sqrt(a * a + b * b - 2 * a * b * cos( hh - m * pi / 30));

  printf("%.20f", ans);

  return 0;
}