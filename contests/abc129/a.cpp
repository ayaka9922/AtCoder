#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int p, q, r;
  cin >> p >> q >> r;
  int ans = p + q;
  ans = min(ans, p + r);
  ans = min(ans, q + r);
  cout << ans << endl;
  return 0;
}