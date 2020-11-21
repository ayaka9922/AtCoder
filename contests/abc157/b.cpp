#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> a[i][j];
    }
  }
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (b == a[i][j]) a[i][j] = 0;
      }
    }
  }
  for (int i = 0; i < 3; i++) {
    if (a[i][0] == 0 && a[i][1] == 0 && a[i][2] == 0) {
      cout << "Yes" << endl;
      return 0;
    } else if (a[0][i] == 0 && a[1][i] == 0 && a[2][i] == 0) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  if (a[0][0] == 0 && a[1][1] == 0 && a[2][2] == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  if (a[0][2] == 0 && a[1][1] == 0 && a[2][0] == 0) {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}