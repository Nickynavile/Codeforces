#include<bits/stdc++.h>
using namespace std;

void c_p_c() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	c_p_c();

	//Taking Inputs
	int n; cin >> n;
	unordered_set<int> s;
	int op = n + 1;
	//Code
	while (true) {
		int temp = op;
		s.clear();
		for (int i = 0; i < 4; i++) {
			int rem = temp % 10;
			s.insert(rem);
			temp = temp / 10;
		}
		if (s.size() == 4) {
			break;
		}
		op++;

	}

	//Printing Output
	for (auto e : s) {
		cout << e;
	}

	return 0;
}