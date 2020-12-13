#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, d;
  cin >> n >> d;
  int x[n][d];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < d; j++) {
      cin >> x[i][j];
    }
  }

  int cnt = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      double dst = 0;
      for (int k = 0; k < d; k++) {
        dst += (x[i][k] - x[j][k]) * (x[i][k] - x[j][k]);
      }
      for (int m = 1; m < 1000; m++) {
        if (dst == m * m) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}