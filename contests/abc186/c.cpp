#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n + 1);
  for (int i = 1; i <= n; i++) {
    a[i] = 1;
    int m = i;
    while (m) {
      if (m % 10 == 7) a[i] = 0;
      m /= 10;
    }
    m = i;
    while (m) {
      if (m % 8 == 7) a[i] = 0;
      m /= 8;
    }
  }
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (a[i] == 1) cnt++;
  }
  cout << cnt << endl;
  return 0;
}