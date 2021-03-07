#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  ll ab = 1e18, ma = 1e18, mb = 1e18;
  vector<ll> a(n), b(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    ab = min(a[i] + b[i], ab);
  }
  ll mx = 1e18;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        mx = min(mx, max(a[i], b[j]));
      }
    }
  }
  cout << min(ab, mx);
  return 0;
}