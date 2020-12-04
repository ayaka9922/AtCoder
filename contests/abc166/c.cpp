#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  vector<int> cnt(n);
  int ans = 0;
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    cnt[a] = max(cnt[a], h[b]);  //展望台aから行けるところのmaxをとる
    cnt[b] = max(cnt[b], h[a]);
  }

  for (int i = 0; i < n; i++) {
    if (h[i] > cnt[i]) ans++;
  }

  cout << ans << endl;
  return 0;
}