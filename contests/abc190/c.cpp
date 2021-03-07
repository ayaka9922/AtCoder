#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
  }
  int k;
  cin >> k;
  vector<int> c(k), d(k);
  for (int i = 0; i < k; i++) {
    cin >> c[i] >> d[i];
  }
  int k2 = 1 << k;
  int ans = 0;
  for (int i = 0; i < k2; i++) {
    vector<int> dish(n + 1);
    for (int j = 0; j < k; j++) {
      if (i >> j & 1)
        dish[d[j]]++;
      else
        dish[c[j]]++;
    }
    int now = 0;
    for (int j = 0; j < m; j++) {
      if (dish[a[j]] == 0) continue;
      if (dish[b[j]] == 0) continue;
      now++;
    }
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}