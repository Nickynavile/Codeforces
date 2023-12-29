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
	string s; getline(cin, s);
	int n = s.length();
	set <char> st;

	//Code
	for (int i = 1; i < (n - 1); i++) {
		st.insert(s[i]);
	}

	//Printing Output
	if (st.size() == 1) {
		cout << 1;
	}
	else if (st.size() == 0) {
		cout << 0;
	}
	else {
		cout << st.size() - 2;
	}

	return 0;
}