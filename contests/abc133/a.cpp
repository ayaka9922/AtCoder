#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, a, b;
  cin >> n >> a >> b;
  if (a * n < b)
    cout << a * n << endl;
  else
    cout << b << endl;
  return 0;
}