#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b) {
  if (a % b == 0) {
    return (b);
  } else {
    return (gcd(b, a % b));
  }
}

int main() {
  int n;
  cin >> n;
  ll ans = 1;
  for (int i = 2; i <= n; i++) {
    ans = ans * i / gcd(ans, i);
  }
  cout << ans + 1 << endl;
  return 0;
}