#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int h;
  cin >> h;
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
