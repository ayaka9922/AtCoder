#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll h;
  cin >> h;
  ll ans = 1, cnt = 1;
  while (h != 1) {
    h /= 2;
    ans += cnt;
    cnt *= 2;
  }
  cout << ans << endl;
  return 0;
}
