#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  int x = 0, y = 0, z = 0;
  for (int i = 0; i < 10; i++) {
    if (s[i] == 'o') x++;
    if (s[i] == 'x') y++;
    if (s[i] == '?') z++;
  }
  int a = 0, b = 0, c = 0;
  if (x > 4) {
    cout << 0;
    return 0;
  } else if (x == 4) {
    cout << 24;
    return 0;
  } else if (x == 1) {
    a = z * 4;
    b = 6 * z * z;
    c = z * z * z * 4;
    cout << a + b + c + 1;
    return 0;
  } else if (x == 2) {
    a = 14;
    b = 24 * z;
    c = 12 * z * z;
    cout << a + b + c;
    return 0;
  } else if (x == 3) {
    a = 36;
    b = 24 * z;
    cout << a + b;
    return 0;
  } else if (x == 0) {
    a = z * z * z * z;
    cout << a;
    return 0;
  }

  return 0;
}