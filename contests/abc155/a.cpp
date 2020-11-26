#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b && a == c) {
    cout << "No" << endl;
  } else if (a != b && a != c && b != c) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}
