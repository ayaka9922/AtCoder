#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n), c(n - 1);
  int sum = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
    sum += b[i];
  }
  for (int i = 0; i < n - 1; i++) {
    cin >> c[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i + 1] - a[i] == 1) sum += c[a[i] - 1];
  }
  cout << sum << endl;
  return 0;
}