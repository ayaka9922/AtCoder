#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1), b(n);
  for (int i = 0; i < n + 1; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] < b[i]) {
      ans += a[i];
      if (a[i + 1] > b[i] - a[i]) {
        a[i + 1] -= b[i] - a[i];
        ans += b[i] - a[i];
      } else {
        ans += a[i + 1];
        a[i + 1] = 0;
      }
    } else {
      ans += b[i];
    }
  }

  cout << ans << endl;
  return 0;
}