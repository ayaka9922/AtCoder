#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int f(int x) {
  int c[20] = {};
  while (x) {
    c[x % 10]++;
    x /= 10;
  }
  int g1 = 0, g2 = 0;
  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < c[i]; j++) {
      g1 = g1 * 10 + i;
    }
  }
  for (int i = 0; i <= 9; i++) {
    for (int j = 0; j < c[i]; j++) {
      g2 = g2 * 10 + i;
    }
  }
  return g1 - g2;
}

int main() {
  int n, k;
  cin >> n >> k;
  int ans = n;
  for (int i = 0; i < k; i++) {
    ans = f(ans);
  }
  cout << ans << endl;
  ;
  return 0;
}