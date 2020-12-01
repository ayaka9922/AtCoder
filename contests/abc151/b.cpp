#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k, m, sum = 0;
  cin >> n >> k >> m;
  m *= n;
  for (int i = 0; i < n - 1; i++) {
    int a;
    cin >> a;
    sum += a;
  }
  if (m >= sum && m - sum <= k)
    cout << m - sum << endl;
  else if (m < sum)
    cout << 0 << endl;
  else
    cout << -1 << endl;
  return 0;
}
