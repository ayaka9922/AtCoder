#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int a;
    vector<int> x(a), y(a);
    cin >> a;
    for (int j = 0; j < a; j++) {
      cin >> x[j] >> y[j];
    }
    int k = 2 << a;
    for (int j = 0; j < k; j++) {
    }
  }
  cout << ans << endl;
  return 0;
}
