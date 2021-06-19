#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string x;
  cin >> x;
  for (int i = 0; i < x.length(); i++) {
    if (x[i] != '.') {
      cout << x[i];
    } else if (x[i] == '.') {
      return 0;
    }
  }

  return 0;
}