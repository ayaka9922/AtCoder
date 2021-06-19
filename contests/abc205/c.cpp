#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  if (abs(x) == abs(y)) {
    if (z % 2 == 0 || x == y)
      cout << '=';
    else if (x < y)
      cout << '<';
    else
      cout << '>';
    return 0;
  }

  if (x >= 0 && y >= 0) {
    if (x > y) {
      cout << '>';
    } else if (x < y) {
      cout << '<';
    }
  } else {
    if (z % 2 == 0) {
      x = abs(x);
      y = abs(y);
      if (x > y) {
        cout << '>';
      } else if (x < y) {
        cout << '<';
      }
    } else {
      if (x > y) {
        cout << '>';
      } else if (x < y) {
        cout << '<';
      }
    }
  }
  return 0;
}