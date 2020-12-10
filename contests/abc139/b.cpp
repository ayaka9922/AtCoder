#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  int ans = 0, out = 1;
  while (b > out) {
    out--;
    out += a;
    ans++;
  }
  cout << ans << endl;
  return 0;
}