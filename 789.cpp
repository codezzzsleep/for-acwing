#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1e5 + 10;
int a[N];

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	while (m--) {
		int x;
		cin >> x;
		int l = 0, r = n - 1;
		while (l < r) {
			int mid = l + r >> 1;
			if (a[mid] >= x) {
				r = mid;
			} else {
				l = mid + 1;
			}
		}
		if (a[l] != x) {
			cout << "-1 -1" << endl;
		} else {
			cout << l << ' ';
			int l = 0, r = n - 1;
			while (l < r) {
				int mid = l + r + 1 >> 1;
				if (a[mid] <= x) {
					l = mid;
				} else {
					r = mid - 1;
				}
			}
			cout << l << endl;
		}
	}
	return 0;
}