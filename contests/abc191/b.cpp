#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    if (a[i] != x) cout << a[i] << " ";
  }
  return 0;
}