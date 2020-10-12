#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }


  int b = 0;
  while ( b < 10000000) {
  int max_ii = 0,max_i = 0, max = 0;
  for (int i = 0; i < n; i++) {
      if (max < a[i]) {
          max = a[i];
          max_i = i;
      }
    }

  int min = a[0];
  for (int i = 1; i < n; i++) {
      if (min > a[i]) {
        min = a[i];
      }
    }

  if (max == min){

    cout << a[max_i]<< endl;
    break;
  }else{
    for (int i = max_i + 1; i < n; i++){
      if (a[max_i] == a[i]){
        a[i] =  max - min;
      }
    }
    a[max_i] = max - min;
   // cnt++;

  }

    b++;
  }
}
