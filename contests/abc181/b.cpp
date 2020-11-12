#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  vector<ll> a(n),b(n);

  for (int i = 0; i < n; i++){
    cin >> a[i] >> b[i];
  }

  ll ans = 0;
  for (int i = 0; i < n; i++){
    ans += (b[i] + a[i]) * (b[i] - a[i] + 1);
  }

  cout << ans / 2 << endl;

  return 0;
}