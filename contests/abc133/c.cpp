#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll l, r;
  cin >> l >> r;
  ll mod = 2019;
  ll ans = 2020;
  if (r - l > 2020) {
    cout << 0 << endl;
    return 0;
  }
  l %= mod;
  r %= mod;
  if (l > r) swap(l, r);
  for (int i = l; i < r; i++) {
    for (int j = i + 1; j <= r; j++) {
      ans = min(ans, i * j % mod);
    }
  }

  cout << ans << endl;
  return 0;
}