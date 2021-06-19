#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int gcd(int x, int y) {
  if (x % y == 0) {
    return y;
#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;

    int gcd(int x, int y) {
      if (x % y == 0) {
        return y;
      } else {
        return gcd(y, x % y);
      }
    }

    int main() {
      int a, b;
      cin >> a >> b;
      int mx = 1;
      int tmp = b / 2 + 1;
      for (int i = 1; i < tmp; i++) {
        int x = b / i;
        if ((x - 1) * i >= a) mx = i;
      }
      cout << mx;
      return 0;
    }
  } else {
    return gcd(y, x % y);
  }
}

int main() {
  int a, b;
  cin >> a >> b;
  int mx = 1;
  int tmp = b / 2 + 1;
  for (int i = 1; i < tmp; i++) {
    int x = b / i;
    if ((x - 1) * i >= a) mx = i;
  }
  cout << mx;
  return 0;
}