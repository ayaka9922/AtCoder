#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  vector<int> d(n);
  for (int i = 0; i < n; i++) {
    cin >> d[i];
  }
  sort(d.begin(), d.end());
  int cnt = 0;
  cnt = d[n / 2] - d[n / 2 - 1];
  cout << cnt << endl;
  return 0;
}