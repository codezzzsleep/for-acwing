#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1e5 + 10;
int a[N], b[N];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		b[i] = a[i] + b[i - 1];
	}
	for (int i = 1; i <= m; ++i) {
		int l, r;
		cin >> l >> r;
		cout << b[r] - b[l - 1] << endl;
	}
	return 0;
}