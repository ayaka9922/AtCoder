#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, cnt = 0;
  cin >> n;
  vector<int> vec(n);

  for (int i = 0; i < n; i++) {
    cin >> vec[i];
  }
  sort(vec.begin(), vec.end());

  for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            for (int k = 0; k < j; k++) {
                if (vec[k] != vec[j] && vec[i] != vec[j] && vec[k] + vec[j] > vec[i]) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
}
