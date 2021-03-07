#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, x;
  cin >> n >> x;
  ll sum = 0;
  int ans = -1;
  vector<int> v(n), p(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i] >> p[i];
  }
  for (int i = 0; i < n; i++) {
    sum += p[i] * v[i];
    if (sum > x * 100) {
      ans = i + 1;
      cout << ans;
      return 0;
    }
  }
  cout << ans;
  return 0;
}