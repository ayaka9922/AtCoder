#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  int mx = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mx = max(mx, a[i]);
    if (mx == a[i]) cnt = i;
  }
  vector<int> b(n, mx);
  a[cnt] = 0;
  mx = 0;
  for (int i = 0; i < n; i++) {
    mx = max(mx, a[i]);
  }
  b[cnt] = mx;
  for (int i = 0; i < n; i++) {
    cout << b[i] << endl;
  }

  return 0;
}