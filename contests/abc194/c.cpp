#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  ll ans = 0;
  vector<ll> a(n), sum(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum[i + 1] = sum[i] + a[i];
    ans += a[i] * a[i] * (n - 1);
  }

  for (int i = 0; i < n; i++) {
    ans -= 2 * a[i] * (sum[n] - sum[i + 1]);
  }
  cout << ans;
  return 0;
}