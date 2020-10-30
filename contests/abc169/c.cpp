#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a;
  double b;
  cin >> a >> b;
  int b2 = (b * 100) + 0.001;
  ll ans = a * b2 / 100;

  printf("%lu\n", ans);

  return 0;
}