#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, l;
  cin >> n >> l;
  int mn = 100, tmp = 0;
  for (int i = 1; i <= n; i++) {
    mn = min(mn, abs(l + i - 1));
    if (mn == abs(l + i - 1)) tmp = l + i - 1;
  }
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    ans += l + i - 1;
  }
  ans -= tmp;
  cout << ans << endl;
  return 0;
}