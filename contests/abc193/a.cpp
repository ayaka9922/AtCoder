#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  double a, b;
  cin >> a >> b;
  double ans = (a - b) * 100;
  cout << (double)ans / a << endl;
  return 0;
}