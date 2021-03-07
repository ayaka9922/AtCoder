#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
  int n, s, d;
  cin >> n >> s >> d;
  vector<int> x(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < n; i++) {
    if (x[i] < s && y[i] > d) {
      cout << "Yes";
      return 0;
    }
  }
  cout << "No";
  return 0;
}