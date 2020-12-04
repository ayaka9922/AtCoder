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
  ll a, b;
  cin >> a >> b;
  ll ans = 0;
  ans = a * b / gcd(a, b);
  cout << ans << endl;
  return 0;
}
