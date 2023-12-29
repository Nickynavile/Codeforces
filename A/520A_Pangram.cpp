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
	int n; string s; cin >> n >> s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	set<char> st;

	//Logic
	if (s.length() < 26) {
		cout << "NO";
		return 0;
	}
	for (int i = 0; i < s.length(); i++) {
		st.insert(s[i]);
	}

	//Printing Output
	if (st.size() == 26) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}

	return 0;
}