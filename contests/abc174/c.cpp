#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int k;
  cin >> k;

  int x = 7 % k;
  set<int> s;
  int i = 1;

  while(s.count(x) == 0){
    if (x == 0){
      cout << i << endl;
      return 0;
    }
    s.insert(x);
    x = (x*10+7)%k;
    ++i;
    }
    cout << -1 << endl;
    return 0;
}