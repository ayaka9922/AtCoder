#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  double n, D, H;
  cin >> n >> D >> H;
  vector<double> d(n), h(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i] >> h[i];
  }
  double ans = 0;
  for (int i = 0; i < n; i++) {
    double y = (H - h[i]) / (D - d[i]);
    ans = max(H - y * D, ans);
  }
  printf("%.10f", ans);
  return 0;
}