#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> l(m), r(m);
  int maxl = 0, minr = 10000000;
  for (int i = 0; i < m; i++) {
    cin >> l[i] >> r[i];
    maxl = max(l[i], maxl);
    minr = min(r[i], minr);
  }
  int ans = minr + 1 - maxl;
  if (ans < 0) ans = 0;
  cout << ans << endl;
  return 0;
}