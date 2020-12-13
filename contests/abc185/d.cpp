#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m + 1), b(m + 2);
  a[m] = n;
  b[0] = 1;
  b[m + 1] = 1;
  for (int i = 0; i < m; i++) {
    cin >> a[i];
    b[a[i]] = 1;
  }
  int k = 1000000;
  for (int i = 0; i < m; i++) {
    k = min(mn, a[i + 1] - a[i] - 1);
    cout << k << endl;
  }
  int cnt = 0;

  cout << "Yes" << endl;
  return 0;
}