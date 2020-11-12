#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<int> num(3);

  while (n) {
    num[n % 10 % 3]++;
    n /= 10;
  }
  int x = (num[1] + num[2] * 2) % 3;
  int k = num[0] + num[1] + num[2];
  if(x == 0){
    cout << 0 << endl;
  } else if (x == 1) {
    if (num[1]) {
      if (k == 1) {
        cout << -1 << endl;
      } else {
        cout << 1 << endl;
      }
    } else {
      if (k == 2) {
        cout << -1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  } else {
    if (num[2]) {
      if (k == 1) {
        cout << -1 << endl;
      } else {
        cout << 1 << endl;
      }
    } else {
      if (k == 2) {
        cout << -1 << endl;
      } else {
        cout << 2 << endl;
      }
    }
  }

  return 0;
}