#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, m, t;
  cin >> n >> m >> t;
  vector<ll> a(m + 2), b(m + 2), c(m + 2);
  for (ll i = 1; i <= m; i++) {
    cin >> a[i] >> b[i];
    c[i] = b[i] - a[i];
  }
  a[m + 1] = t;
  int now = n;
  for (ll i = 1; i <= m + 1; i++) {
    now -= a[i] - b[i - 1];
    if (now <= 0) {
      cout << "No" << endl;
      return 0;
    }
    now += c[i];
    if (n < now) {
      now = n;
    }
  }
  if (now <= 0) {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}