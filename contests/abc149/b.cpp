#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b, k;
  cin >> a >> b >> k;
  if (a + b <= k) {
    a = 0;
    b = 0;
  } else {
    if (a >= k) {
      a -= k;
    } else {
      b -= (k - a);
      a = 0;
    }
  }
  cout << a << " " << b << endl;
  return 0;
}
