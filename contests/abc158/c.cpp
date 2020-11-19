#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = -1;
  for (int i = 1; i < 1010; i++) {
    if (i * 8 / 100 == a && i * 10 / 100 == b) {
      cout << i << endl;
      return 0;
    }
  }
  cout << ans << endl;
  return 0;
}