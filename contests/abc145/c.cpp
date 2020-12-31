#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  double dst = 0;
  ll t = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      t = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
      dst += (double)sqrt(t);
    }
  }
  rep(i, n) dst /= i + 1;
  dst *= 2;
  rep(i, n - 1) dst *= i + 1;

  printf("%.10f\n", dst);
  return 0;
}
