#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  int cnt = 0;
  for (int i = 0; i < n - 2; i++) {
    if (p[i] < p[i + 1] && p[i + 1] < p[i + 2]) {
      cnt++;
    } else if (p[i] > p[i + 1] && p[i + 1] > p[i + 2]) {
      cnt++;
    }
  }
  cout << cnt << endl;
  return 0;
}