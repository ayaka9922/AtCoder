#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n, d;
  cin >> n >> d;

  vector<ll> x(n);
  vector<ll> y(n);

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    cin >> x.at(i) >> y.at(i);
    x.at(i) = abs(x.at(i));
    y.at(i) = abs(y.at(i));
    if (sqrt((x[i] * x[i]) + (y[i] * y[i])) <= d){
      cnt++;
    }
  }

  cout << cnt << endl;

}