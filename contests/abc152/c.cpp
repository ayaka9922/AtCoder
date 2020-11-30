#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  int ans = 0, mn = 10000000;
  for (int i = 0; i < n; i++) {
    mn = min(mn, p[i]);
    if (mn == p[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}
