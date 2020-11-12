#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  vector<ll> x(n),y(n);

  for (int i = 0; i < n; i++){
    cin >> x[i] >> y[i];
  }
  for (int i = 0; i < n-1; i++){
    for (int j = i + 1; j < n; j++){
      if(x[i] == x[j]) {
        for (int k = j + 1; k < n; k++){
          if(x[j] == x[k]) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }
  for (int i = 0; i < n-1; i++){
    for (int j = i + 1; j < n; j++){
      if(y[i] == y[j]) {
        for (int k = j + 1; k < n; k++){
          if(y[j] == y[k]) {
            cout << "Yes" << endl;
            return 0;
          }
        }
      }
    }
  }

  double t;
  for (int i = 0; i < n-1; i++){
    for (int j = i + 1; j < n; j++){
      double xt = (x[i]-x[j]);
      double yt = (y[i]-y[j]);
      t = yt/xt;
      for (int k = j + 1; k < n; k++){
        double xk = (x[i]-x[k]);
        double yk = (y[i]-y[k]);
        if(t == yk/xk) {
          cout << "Yes" << endl;
          return 0;
          }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}