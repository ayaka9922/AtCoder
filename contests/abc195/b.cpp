#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, w;
  cin >> a >> b >> w;
  w *= 1000;
  int mn = 1000000000, mx = 0;
  for (int i = w / b; i <= w / a; i++) {
    if (a <= (double)w / i && (double)w / i <= b) {
      mn = min(mn, i);
      mx = max(mx, i);
    }
  }

  if (mn == 1000000000 && mx == 0) {
    cout << "UNSATISFIABLE";
    return 0;
  } else {
    cout << mn << " " << mx;
  }

  return 0;
}