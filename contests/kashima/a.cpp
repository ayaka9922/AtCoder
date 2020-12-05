#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  ll ans = 1;
  int i = 0;
  int so[]={ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  while(so[i] <n){
    ans *= so[i];
    i++;
  }
  cout << ans*n +1<< endl;
  return 0;
}
