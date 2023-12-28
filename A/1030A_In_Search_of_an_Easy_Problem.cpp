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
	int t; cin >> t; int check = 0;

	//Code
	while (t--) {
		int no;
		cin >> no;
		check += no;
	}

	//Printing Output
	if (check > 0) {
		cout << "HARD";
	}
	else {
		cout << "EASY";
	}

	return 0;
}