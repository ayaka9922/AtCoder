#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> a(n), b(n);
  vector<ll> c(n), d(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    c[i] = a[i] + b[i];
    d[i] += a[i];
  }

  for (int i = 0; i < n; i++) {
    cout << c[i] << endl;
  }
  return 0;
}