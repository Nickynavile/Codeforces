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
	int t; cin >> t;
	vector<int> v;
	for (int i = 0; i < t; i++) {
		int no;
		cin >> no;
		v.push_back(no);
	}

	// Main Logic
	int sereja = 0, dima = 0;
	bool check = true;
	int l = 0, h = t - 1;
	while (l <= h) {
		int temp = max(v[l], v[h]);
		if (check == true) {
			sereja += temp;
			check = false;
		}
		else {
			dima += temp;
			check = true;
		}
		//Update Pointer
		if (v[l] >= v[h]) {
			l++;
		}
		else {
			h--;
		}
	}

	//Printing Output
	cout << sereja << " " << dima;

	return 0;
}