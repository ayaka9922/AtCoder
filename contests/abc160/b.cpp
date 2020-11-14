#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int a = 0, b = 0, ans = 0;
  a = n / 500;
  b = (n - (a * 500))/ 5;
  ans = a * 1000 + b * 5;
  cout << ans << endl;
  return 0;
}