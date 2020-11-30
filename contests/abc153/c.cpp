#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  if (n <= k) {
    cout << 0 << endl;
    return 0;
  }
  sort(h.begin(), h.end());
  ll ans = 0;
  for (int i = 0; i < n - k; i++) {
    ans += h[i];
  }
  cout << ans << endl;
  return 0;
}
