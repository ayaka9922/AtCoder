#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll inf = 1e18;

int main() {
  ll n;
  cin >> n;
  set<ll> st;
  for (ll a = 2; a * a <= n; a++) {
    ll x = a * a;
    while (x <= n) {
      st.insert(x);
      x *= a;
    }
  }
  cout << n - st.size() << endl;
  return 0;
}