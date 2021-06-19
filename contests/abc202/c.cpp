#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int a[n] = {}, b[n] = {}, c[n] = {};
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a[x - 1]++;
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    b[i] = a[x - 1];
  }
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    c[x - 1]++;
  }

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += (ll)b[i] * c[i];
  }
  cout << ans;
  return 0;
}
