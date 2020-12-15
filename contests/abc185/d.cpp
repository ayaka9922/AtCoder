#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for (int i = 0; i < m; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  a.push_back(n + 1);
  int cur = 1;  // 1スタート
  vector<int> l;
  for (int i = 0; i < m + 1; i++) {
    int w = a[i] - cur;
    if (w != 0) l.push_back(w);
    cur = a[i] + 1;
  }
  int k = n;
  for (int w : l) k = min(k, w);  // k決める
  int ans = 0;
  for (int w : l) ans += (w + k - 1) / k;  //切り上げ
  cout << ans << endl;
  return 0;
}