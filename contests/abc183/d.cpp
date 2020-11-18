#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int max_t = 200009;

int main() {
  int n,  w;
  cin >> n >> w;
  vector<ll> a(max_t);
  for (int i = 0; i < n; i++) {
    int s, t, p;
    cin >> s >> t >> p;
    a[s] += p;
    a[t] += -p;
  }
  for (int i = 0; i < max_t - 1; i++) {
    a[i+1] += a[i];
  }
  for (int i = 0; i < max_t; i++) {
    if (a[i] > w) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}