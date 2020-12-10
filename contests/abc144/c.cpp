#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  ll cnt = 1;
  for (ll i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) {
      cnt = i;
    }
  }
  ll ans = 0;
  ans = cnt + n / cnt - 2;
  cout << ans << endl;
  return 0;
}