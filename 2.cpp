#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1010;
int v[N], w[N];
int f[N];

int main() {
	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> v[i] >> w[i];
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = m; j >= v[i] ; --j) {
			f[j] = max(f[j], f[j - v[i]] + w[i]);
		}
	}
	cout << f[m];
	return 0;
}