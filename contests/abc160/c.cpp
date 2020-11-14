#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int k, n;
  cin >> k >> n;
  vector<int> a(n);
  int ans = k, dst = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n - 1; i++) {
    dst = max(dst, abs(a[i] - a[i+1]));
  }
  if (a[0] + k - a[n-1] > dst) dst = a[0] + k - a[n-1];
  ans = k - dst;
  cout << ans << endl;
  return 0;
}