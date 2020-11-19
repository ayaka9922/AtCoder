#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n, a, b;
  cin >> n >> a >> b;
  ll ans = 0, p = a + b;
  ans = (n / p) * a;
  if (n % p >= a) ans += a;
  else ans += n % p;
  cout << ans << endl;

  return 0;
}