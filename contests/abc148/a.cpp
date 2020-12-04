#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a, b;
  cin >> a >> b;
  if (a > b) swap(a, b);

  if (a == 1 && b == 2) cout << 3 << endl;
  if (a == 1 && b == 3) cout << 2 << endl;
  if (a == 2 && b == 3) cout << 1 << endl;
  return 0;
}
