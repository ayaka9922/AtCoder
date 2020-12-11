#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int k, x;
  cin >> k >> x;
  int i = x - k + 1;
  while (i < k + x) {
    cout << i << " ";
    i++;
  }
  cout << endl;
  return 0;
}