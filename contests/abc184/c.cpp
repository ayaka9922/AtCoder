#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int r1, c1, r2, c2;
  cin >> r1 >> c1 >> r2 >> c2;
  r2 = abs(r2 - r1);
  c2 = abs(c2 - c1);
  if (r2 == 0 && c2 == 0) {
    cout << 0 << endl;
  } else if (r2 + c2 <= 3 || r2 == c2) {
    cout << 1 << endl;
  } else {
    if ((r2 + c2) % 2 == 0 || r2 + c2 <= 6 || abs(r2 - c2) <= 3) {
      cout << 2 << endl;
    } else {
      cout << 3 << endl;
    }
  }
  return 0;
}
