#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  int MX = 0;
  vector<int> a(n);
  for (int i = 0; i < n; i++){
    cin >> a[i];
    MX = max(MX, a[i]);
  }
  int max=0, ans=-1;
  for (int i = 2; i <= MX; i++){
    int cnt = 0;
    for (int j = 0; j < n; j++){
      if(a[j]%i == 0){
        cnt++;
      }
    }
    if (cnt >= max) {
      max = cnt;
      ans = i;
    }
  }

  cout << ans << endl;

  return 0;
}