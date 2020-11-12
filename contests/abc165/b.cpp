#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll x;
  cin >> x;
  ll m = 100, cnt = 0;
  while(x > m){
    m += m/100;
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}