#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  vector<int> x(5);
  int cnt = 0;
  for (int i = 0; i < 5; i++) {
    cin >> x[i];
    if (x[i] == 0) cnt = i + 1;
  }
  cout << cnt << endl;

  return 0;
}
