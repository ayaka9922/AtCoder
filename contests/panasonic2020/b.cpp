#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll h, w;
  cin >> h >> w;
  ll ans = 0;
  if (h == 1 || w == 1) {
    ans = 1;
    cout << ans << endl;
  } else {
    ans = (h * w + 1) / 2;
    cout << ans << endl;
  }
  return 0;
}