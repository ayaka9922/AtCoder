#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll s, p;
  cin >> s >> p;
  set<ll> a;

  for (ll i = 1; i * i <= p; i++) {
    if (p % i != 0) {
      continue;
    }
    a.insert(i);
    a.insert(p / i);
  }

  for (ll i : a) {
    if (i + (p / i) == s) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}