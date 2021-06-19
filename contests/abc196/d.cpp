#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, T, A;
  cin >> n >> T >> A;
  double mn = 10000;
  vector<int> h(n);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> h[i];
    double c = T - h[i] * 0.006;
    if (A >= c) {
      mn = min(mn, abs(A - c));
      if (mn == abs(A - c)) ans = i + 1;
    } else {
      mn = min(mn, abs(c - A));
      if (mn == abs(c - A)) ans = i + 1;
    }
  }
  cout << ans << endl;
  return 0;
}