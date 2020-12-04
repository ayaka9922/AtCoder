#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int sum = 0;
  for (int i = 0; i < 3; i++) {
    int a;
    cin >> a;
    sum += a;
  }
  if (sum >= 22)
    cout << "bust" << endl;
  else
    cout << "win" << endl;
  return 0;
}
