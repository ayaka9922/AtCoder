#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;

  vector<int> x(n);
  for (int i = 0; i < n; i++) {
    cin >> x[i];
    if (x[i] < 0){
      x[i] = abs(x[i]);
    }
  }

  ll a = 0,b = 0;
  int c = 0;

for (int i = 0; i < n; i++) {
  a += x[i];
  b += ll (x[i]) * x[i]; // オーバーフローするからll
  c = max(c, x[i]);
}

  cout << a << endl;
  cout << fixed << setprecision(15) << sqrt(b) << endl;
  cout << c << endl;
}
