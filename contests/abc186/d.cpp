#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  vector<ll> sum(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  sum[0] = a[0];
  for (int i = 1; i < n; i++) {
    sum[i] = sum[i - 1] + a[i];
  }
  ll ans = 0;
  for (int i = 0; i < n - 1; i++) {
    ans += sum[n - 1] - sum[i];
    ans -= (ll)(n - i - 1) * a[i];
  }
  cout << ans << endl;
  return 0;
}