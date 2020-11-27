#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> p(n), sum(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
    sum[i + 1] = sum[i] + p[i] + 1;
  }
  int mx = sum[k];
  for (int i = 0; i < n - k + 1; i++) {
    mx = max(mx, sum[i + k] - sum[i]);
  }
  double ans = mx;
  ans /= 2;
  printf("%.10f\n", ans);
  return 0;
}
