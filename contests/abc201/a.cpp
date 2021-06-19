#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;
  if (a1 > a2) swap(a1, a2);
  if (a1 > a3) swap(a1, a3);
  if (a2 > a3) swap(a2, a3);

  if (a3 - a2 == a2 - a1) {
    cout << "Yes";
  } else {
    cout << "No";
  }
  return 0;
}
