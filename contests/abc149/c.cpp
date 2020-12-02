#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int x;
  cin >> x;
  while (1) {
    bool ok = true;
    for (int i = 2; i < x; i++) {
      if (x % i == 0) {
        ok = false;
      }
    }
    if (ok) break;
    x++;
  }
  cout << x << endl;
  return 0;
}
