#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  int ans = 0;
  int cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    if (h[i] >= h[i + 1]) {
      cnt++;
    } else {
      cnt = 0;
    }
    ans = max(cnt, ans);
  }
  cout << ans << endl;
  return 0;
}