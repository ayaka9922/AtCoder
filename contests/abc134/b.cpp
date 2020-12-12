#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, d;
  cin >> n >> d;
  int st = 1;
  int ans = 0;
  while (st <= n) {
    ans++;
    st += 2 * d + 1;
  }
  cout << ans << endl;
  return 0;
}