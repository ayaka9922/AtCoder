#include <bits/stdc++.h>
#include <cassert>
#include <numeric>
using namespace std;
using ll = long long;

int gcd(int a, int b) {
    if (b == 0) {
      return a;
    }
    else {
      return gcd(b, a % b);
    }
}

int main() {
    int k;
    cin >> k;
    int ans = 0;
    for (int a = 1; a <= k; a++) {
        for (int b = 1; b <= k; b++) {
            for (int c = 1; c <= k; c++) {
                ans += gcd(gcd(a, b), c);
            }
        }
    }
    cout << ans << endl;
    return 0;
}