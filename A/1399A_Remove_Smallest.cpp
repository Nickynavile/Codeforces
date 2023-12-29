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
	set<int> s;

	//Code
	while (t--) {

		//Taking Inputs
		int n;
		cin >> n;
		while (n--) {
			int no;
			cin >> no;
			s.insert(no);
		}

		//Main Logic
		auto i = s.begin();
		int min = *i;
		bool check = true;
		for (auto it = s.begin(); it != s.end(); it++) {
			if (*it != min) {
				check = false;
			}
			min++;
		}

		//Printing Ouput
		if (check == true) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}

		s.clear();
	}

	return 0;
}