#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  for (int i = 1; i < 10; i++) {
    for (int j = 1; j < 10; j++) {
      int k;
      k = i * j;
      if (k == n) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}
