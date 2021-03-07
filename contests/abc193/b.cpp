#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int ans = 1e9;
  for (int i = 0; i < n; i++) {
    int a, p, x;
    cin >> a >> p >> x;
    if (a < x) {
      ans = min(ans, p);
    }
  }
  if (ans == 1e9) {
    ans = -1;
  }
  cout << ans;
  return 0;
}