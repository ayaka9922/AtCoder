#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<ll> h(n);
  for (int i = 0; i < n; i++) {
    cin >> h[i];
  }
  for (int i = 0; i < n - 1; i++) {
    if (h[i] > h[i + 1]) h[i] -= 1;
  }
  for (int i = 0; i < n - 1; i++) {
    if (h[i] > h[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}