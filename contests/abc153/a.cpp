#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int h, a;
  cin >> h >> a;
  int cnt = 0;
  while (h > 0) {
    h -= a;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}
