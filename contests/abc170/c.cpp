#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int x, n;
  cin >> x >> n;
  vector<int> p(n);
  vector<int> sub(102);


  for (int i = 0; i < n; i++){
    cin >> p[i];
    sub[p[i]] = 1000;
  }
  for (int i = 0; i < 102; i++){
    if(sub[i] != 1000){
      sub[i] = i;
    }
  }

  int dis = 10000,ans = 1000;
  for (int i = 0; i < 102; i++){
    if (dis > abs(sub[i] - x)){
      ans = i;
      dis = abs(sub[i] - x);
    }else if (dis == abs(sub[i] - x)){
      if (ans > i) ans = i;
    }
  }
  cout << ans << endl;

  return 0;
}