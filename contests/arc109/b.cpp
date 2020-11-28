#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<ll> sum(n);
  ll cnt = 0;
  sum[0] = 1;
  for (ll i = 2; i < 1000000000; i++) {
    sum[i + 1] = sum[i] + i;
    cnt = i - 2;
    if (sum[i + 1] >= n + 1) break;
  }
  ll ans = n - cnt;
  cout << ans << endl;
  return 0;
}
