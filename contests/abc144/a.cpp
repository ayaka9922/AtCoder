#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  if (a <= 9 && b <= 9) {
    cout << a * b << endl;
    return 0;
  } else {
    cout << -1 << endl;
  }
  return 0;
}
