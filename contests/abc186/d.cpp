#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  ll sum = 0;
  int m = 1 - n;
  for (int i = 0; i < n; i++) {
    sum += a[i] * m;
    m += 2;
  }
  cout << abs(sum);
  return 0;
}