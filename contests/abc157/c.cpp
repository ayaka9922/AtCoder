#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  int a[m][2];
  for (int i = 0; i < m; i++) {
    cin >> a[i][0] >> a[i][1];
  }
  for (int i = 0; i < 1000; i++) {
    int keta = 1;
    int x = i / 10;
    vector<int> d(1, i % 10);
    while (x) {
      keta++;
      d.push_back(x % 10);
      x /= 10;
    }
    if (keta != n) continue;
    bool ok = true;
    reverse(d.begin(), d.end());
    for (int j = 0; j < m; j++) {
      if (d[a[j][0] - 1] != a[j][1]) ok = false;
    }
    if (ok) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}