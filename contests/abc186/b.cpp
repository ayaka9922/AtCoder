#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int h, w;
  cin >> h >> w;
  int mn = 100;
  int sum = 0;
  for (int i = 0; i < w * h; i++) {
    int a;
    cin >> a;
    sum += a;
    mn = min(mn, a);
  }
  int t = mn * h * w;
  int ans = sum - t;
  cout << ans;
  return 0;
}