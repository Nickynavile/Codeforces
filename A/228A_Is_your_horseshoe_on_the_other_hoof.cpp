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
	set<int> s;
	for (int i = 0; i < 4; i++) {
		int n;
		cin >> n;
		s.insert(n);
	}

	//Printing Output
	cout << 4 - s.size() ;


	return 0;
}