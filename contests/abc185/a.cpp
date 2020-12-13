#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int ans = 1000;
  for (int i = 0; i < 4; i++) {
    int a;
    cin >> a;
    ans = min(ans, a);
  }
  cout << ans << endl;
  return 0;
}