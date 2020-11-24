#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  int sum = a + b + c;
  double ans = 0;
  ans = (100 - a) * a + (100 - b) * b + (100 - c) * c;
  ans /= sum;
  cout << ans << endl;
  return 0;
}
