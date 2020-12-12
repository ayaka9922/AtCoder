#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b;
  cin >> a >> b;
  ll ans = 0;
  ans = b + a;
  if (ans % 2 != 0)
    cout << "IMPOSSIBLE" << endl;
  else
    cout << ans / 2 << endl;
  return 0;
}