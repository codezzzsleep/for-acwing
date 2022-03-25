#include <bits/stdc++.h>
using namespace std;
int n;
const int N = 1e5 + 10;
int a[N], b[N];

int main() {
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}
	for (int i = 1; i <= n; ++i) {
		b[i] = 1;
		for (int j = 1; j < i; ++j) {
			if (a[j] < a[i])
				b[i] = max(b[i], b[j] + 1);
		}
	}
	int res = 0;
	for (int i = 1; i <= n; ++i) {
		res = max(res, b[i]);
	}
	cout << res;
	return 0;
}