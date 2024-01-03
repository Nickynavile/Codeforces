#include<bits/stdc++.h>
using namespace std;

void c_p_c() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int isum(int no) {
	int nsum = 0;
	while (no != 0) {
		int rem = no % 10;
		nsum += rem;
		no = no / 10;
	}
	return nsum;
}

int solve(int n) {
	vector<int> v; int i = 1;
	while (v.size() <= n) {
		int rem = i % 10;
		int nsum = isum(i);
		if (rem != 3 && (nsum % 3) != 0) {
			v.push_back(i);
		}
		i++;
	}
	return v[n - 1];
}

int main() {
	c_p_c();

	//Taking Inputs
	int t; cin >> t;

	while (t--) {
		int no;
		cin >> no;
		cout << solve(no) << endl;
	}

	return 0;
}