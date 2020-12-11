#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<double> a(n);
  double sum;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += 1 / a[i];
  }
  printf("%.10f\n", 1 / sum);
  return 0;
}