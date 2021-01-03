#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  string a, b;
  cin >> a >> b;
  int cnta = 0, cntb = 0;
  for (int i = 0; i < 3; i++) {
    int num = a[i] - '0';  // intに変換
    int numb = b[i] - '0';
    cnta += num;
    cntb += numb;
  }

  cout << max(cnta, cntb) << endl;
  return 0;
}