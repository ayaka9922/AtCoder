#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(int a, int b) {
  if (a > b) swap(a, b);
  if (b % a == 0) {
    return a;
  } else {
    return gcd(a, b % a);
  }
}

ll lcm(int a, int b) { return a / gcd(a, b) * b; }

int main() {
  ll a, b;
  ll c, d;
  cin >> a >> b >> c >> d;
  a = a - 1;
  ll sb = b / c + b / d - b / lcm(c, d);
  ll sa = a / c + a / d - a / lcm(c, d);
  ll ans = sb - sa;
  ll num = b - a;
  cout << num - ans << endl;
  return 0;
}