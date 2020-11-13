#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  int tmp = 0;
  tmp = x;
  x = y;
  y = tmp;
  tmp = x;
  x = z;
  z = tmp;
  cout << x << " " << y << " " << z << endl;
  return 0;
}