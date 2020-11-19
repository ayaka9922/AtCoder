#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string a;
  int q;
  cin >> a >> q;
  for (int i = 0; i < q; i++) {
    int b;
    cin >> b;
    if (b == 2) {
      int c;
      char d;
      cin >> c >> d;
      if (c == 1){
        a = d + a;
      } else {
        a = a + d;
      }
    } else {
      reverse(a.begin(), a.end());
    }
  }
  cout << a << endl;
  return 0;
}