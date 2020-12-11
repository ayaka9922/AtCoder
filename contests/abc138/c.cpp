#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<double> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());
  double avg = 0;
  for (int i = 0; i < n - 1; i++) {
    avg = (v[i] + v[i + 1]) / 2;
    v[i + 1] = avg;
  }
  printf("%.10f\n", avg);
  return 0;
}