#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m, sum = 0;
  cin >> n >> m;
  vector<int> a(m);
  for (int i = 0; i < m; i++){
    cin >> a[i];
    sum += a[i];
  }
  if (n >= sum) {
    cout << n - sum << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}