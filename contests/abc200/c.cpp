#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<vector<ll>> a(201, vector<ll>());
  for (int i = 0; i < n; i++) {
    ll b;
    cin >> b;
    a[b % 200].push_back(b);
  }
  ll ans = 0;
  for (int i = 0; i < 200; i++) {
    if (a[i].size() >= 2) ans += (ll)a[i].size() * (a[i].size() - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}