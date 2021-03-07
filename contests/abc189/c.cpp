#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {  // i < n-1 にしてずっとWAした
    ll x = 100000;
    for (int j = i; j < n; j++) {
      x = min(x, a[j]);
      ans = max((ll)x * (j - i + 1), ans);
    }
  }
  cout << ans << endl;
  return 0;
}