#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int ans = 0;
  ans = c - a + b;
  if (ans < 0) ans = 0;
  cout << ans << endl;
  return 0;
}