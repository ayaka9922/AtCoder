#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> ac(n), wa(n);
  for (int i = 0; i < m; i++) {
    int p;
    string s;
    cin >> p >> s;
    --p;
    if (ac[p]) continue;
    if (s == "AC") {
      ac[p] = 1;
    } else {
      wa[p]++;
    }
  }
  int AC = 0, WA = 0;
  for (int i = 0; i < n; i++) {
    AC += ac[i];
    if (ac[i]) WA += wa[i];
  }
  cout << AC << " " << WA << endl;
  return 0;
}