#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll a, b , c; //大きさを比べるときは整数で解く
  cin >> a >> b >> c;
  ll d = c- a - b;
  if (d > 0 && d * d > 4 * a * b) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}