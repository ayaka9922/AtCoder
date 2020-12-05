#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  string s;
  cin >> n >> s;
  for (int i = 0; i < s.size(); i++) {
    s[i] = (s[i] - 'A' + n) % 26 + 'A';
    // -'A'で計算できるように戻して+ 'A'でアルファベットに戻している
  }
  cout << s << endl;
  return 0;
}
