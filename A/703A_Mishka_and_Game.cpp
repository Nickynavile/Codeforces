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
	int t; cin >> t; int mishka = 0, chris = 0;

	//Main Logic
	while (t--) {
		int m, c;
		cin >> m >> c;
		if (m > c) {
			mishka++;
		}
		else if (c > m) {
			chris++;
		}
	}

	//Priting Output
	if (mishka > chris) {
		cout << "Mishka" << endl;
	}
	else if (chris > mishka) {
		cout << "Chris" << endl;
	}
	else {
		cout << "Friendship is magic!^^" << endl;
	}



	return 0;
}