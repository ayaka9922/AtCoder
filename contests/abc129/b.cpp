#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> w(n);
  vector<int> sum(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  sum[0] = w[0];
  for (int i = 1; i < n; i++) {
    sum[i] = sum[i - 1] + w[i];
  }
  int ans = sum[n - 1];
  for (int i = 0; i < n - 1; i++) {
    ans = min(ans, abs(sum[n - 1] - 2 * sum[i]));
  }
  cout << abs(ans) << endl;
  return 0;
}