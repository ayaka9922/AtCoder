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
  if (n == 1) {
    cout << "Yes" << endl;
    return 0;
  }
  for (int i = n - 1; i > 0; i--) {
    if (h[i - 1] - h[i] == 1) {
      h[i - 1]--;
    } else if (h[i - 1] - h[i] > 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}