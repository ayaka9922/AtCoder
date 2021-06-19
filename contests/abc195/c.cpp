#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  int cnt = 0;
  ll tmp = n;
  ll ans = 0;
  while (tmp) {
    tmp /= 10;
    cnt++;
  }
  if (cnt <= 3) {
    cout << 0;
  } else if (cnt <= 6) {
    cout << n - 999;
  } else if (cnt <= 9) {
    cout << 2 * n - 999999 - 999;
  } else if (cnt <= 12) {
    ans = 999999 - 999;
    ans += (999999999 - 999999) * 2;
    cout << ans + (n - 999999999) * 3;
  } else if (cnt <= 15) {
    ans = 999999 - 999 + (999999999 - 999999) * 2;
    ans += (999999999999 - 999999999) * 3;
    cout << ans + (n - 999999999999) * 4;
  } else {
    ans = 999999 - 999 + (999999999 - 999999) * 2;
    ans += (999999999999 - 999999999) * 3;
    ans += (999999999999999 - 999999999999) * 4;
    cout << ans + (n - 999999999999999) * 5;
  }

  return 0;
}