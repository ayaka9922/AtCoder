#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m + 1), b(n + 2);
  a[m] = n;
  b[0] = 1;
  b[n + 1] = 1;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    b[a[i]] = 1;
  }
  sort(a.begin(), a.end());
  int k = 100000;
  if (a[0] > 1) k = a[0] - 1;
  for (int i = 0; i < m; i++) {
    if (a[i + 1] - a[i] - 1 > 0) {
      k = min(k, a[i + 1] - a[i] - 1);
    }
  }
  int cnt = 0;
  for (int i = 1; i < n + 1; i++) {
    if (b[i] == 0 && b[i + k - 1] == 0) {
      for (int j = i; j < i + k; j++) {
        b[j] = 1;
      }
      cnt++;
    }
    if (b[i] == 0) {
      b[i] = 1;
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}