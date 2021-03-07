#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll convert(ll x, ll n) {
  ll y = 0, i = 0, z;
  while (x > 0) {
    z = x % 10;
    y += z * pow(n, i);
    x = x / 10;
    i++;
  }
  return y;
}

int main() {
  string s;
  ll x, m;
  cin >> s >> m;
  int mx = 0;
  for (int i = 0; i < s.length(); i++) {
    char c = s[i];
    int a = c - '0';
    mx = max(mx, a);
  }
  ll ans = 0;
  ll n = mx + 1;
  if (s.length() > 18)
    x = 1e18;
  else
    x = atol(s);
  for (ll i = n; convert(x, i) <= m; i++) {
    if (convert(x, i) <= m) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}