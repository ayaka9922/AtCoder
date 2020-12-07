#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  if (b * 2 < a) {
    cout << a - b * 2 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
