#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m) {
	if(n < m) {
    swap(n, m);
    }
	if(n % m == 0) {
    return m;
    }
	return gcd(m, n % m);
}

int main() {
	int N; cin >> N;
	vector<int> a(N);
	for(int i = 0; i < N; i++) {
    cin >> a[i];
  }
	int ans = a[0];
	for(int i = 1; i < N; i++) {
    ans= gcd(ans, a[i]);
    }
	cout << ans << endl;
}