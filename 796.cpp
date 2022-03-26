#include <bits/stdc++.h>
using namespace std;
int n, m, q;
const int N = 1010;
int a[N][N], b[N][N];

int main() {
	cin >> n >> m >> q;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> a[i][j];
			b[i][j] = a[i][j] + b[i - 1][j] + b[i][j - 1] - b[i - 1][j - 1];
		}
	}
	while (q--) {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		cout << b[x2][y2] + b[x1 - 1][y1 - 1] - b[x1 - 1][y2] - b[x2][y1 - 1] << endl;
	}
	return 0;
}