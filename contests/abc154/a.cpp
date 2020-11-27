#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string s, t, u;
  int a, b;
  cin >> s >> t >> a >> b >> u;
  if (s == u) a -= 1;
  if (t == u) b -= 1;
  cout << a << " " << b << endl;
  return 0;
}
