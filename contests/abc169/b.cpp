#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll mx = 1e18;

int main() {
  int n;
  cin >> n;
  ll ans = 1;
  bool b = false;
  for (int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    if (a == 0) {
      cout << 0 << endl;
      return 0;
    }
    if (b || mx/ans < a) {
      b = true;
    }
    ans *= a;
  }
  if (b) cout << -1 << endl;
  else cout << ans << endl;
  return 0;
}