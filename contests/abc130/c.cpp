#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int w, h, x, y;
  cin >> w >> h >> x >> y;
  vector<int> l(n + 1);
  int d = 0;
  int cnt = 1;
  for (int i = 0; i < n; i++) {
    cin >> l[i];
    d += l[i];
    if (d <= x) cnt++;
  }
  cout << cnt << endl;
  return 0;
}