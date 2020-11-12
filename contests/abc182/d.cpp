#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll sum = 0, sum_m =0, ans = 0, p = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i]; //累積和
    sum_m = max(sum_m, sum);
    ans = max(ans, p + sum_m);
    // cout << i << ":" << sum << ":" << p + a[i] << endl;
    p += sum;
  }
  cout << ans << endl;

  return 0;
}