#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, k, q;
  cin >> n >> k >> q;
  vector<int> cnt(n);
  for (int i = 0; i < q; i++) {
    int a;
    cin >> a;
    cnt[a - 1]++;
  }
  for (int i = 0; i < n; i++) {
    if (cnt[i] + k - q <= 0) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }

  return 0;
}
