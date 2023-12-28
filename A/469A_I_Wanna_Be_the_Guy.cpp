#include<bits/stdc++.h>
#include <iomanip>
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
	int n, p, q; cin >> n;
	set<int> s;

	cin >> p;
	while (p--) {
		int no;
		cin >> no;
		s.insert(no);
	}
	cin >> q;
	while (q--) {
		int no;
		cin >> no;
		s.insert(no);
	}

	//Printing Output
	if (s.size() == n) {
		cout << "I become the guy.";
	}
	else {
		cout << "Oh, my keyboard!";
	}

	return 0;
}