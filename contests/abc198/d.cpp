#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int x, y;
  cin >> x >> y;
  int a[] = {4, 6, 9, 11};
  if (x == y) {
    cout << "Yes";
    return 0;
  } else if (x == 2 || y == 2) {
    cout << "No";
    return 0;
  }
  int x1 = 0, y1 = 0;
  for (int i = 0; i < 4; i++) {
    if (a[i] == x) x1 = 1;
    if (a[i] == y) y1 = 1;
  }
  if (x1 == y1) {
    cout << "Yes";
  } else {
    cout << "No";
  }

  return 0;
}