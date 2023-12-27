#include<bits/stdc++.h>
using namespace std;

void c_p_c() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	c_p_c();

	//Taking Input
	int n, k; cin >> n >> k; int arr[n]; int ans = 0;
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		arr[i] = no;
	}
	//compare and get results
	int comp = arr[k - 1];
	for (int i = 0; i < n; i++) {
		if (arr[i] >= comp && arr[i] > 0) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}