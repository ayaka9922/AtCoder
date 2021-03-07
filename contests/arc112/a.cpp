#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll t;
  cin >> t;
  vector<ll> x(t), y(t), ans(t);
  for (ll i = 0; i < t; i++) {
    cin >> x[i] >> y[i];
  }
  for (ll i = 0; i < t; i++) {
    ll e = 0;
    if (y[i] % 2 == 0)
      e = y[i] - x[i] - 1;
    else
      e = y[i] - x[i];
    ans[i] = (e + 1) * e / 2;
    if (x[i] == 0) {
      ans[i] = (y[i] + 1) * (y[i] + 1) / 2;
    }
    // cout << e << endl;
  }
  for (ll i = 0; i < t; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}
