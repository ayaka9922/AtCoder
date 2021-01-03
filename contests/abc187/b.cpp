#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  int ans = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((double)(y[i] - y[j]) / (x[i] - x[j]) >= -1 &&
          (double)(y[i] - y[j]) / (x[i] - x[j]) <= 1) {
        ans++;
      }
    }
  }
  cout << ans;
  return 0;
}