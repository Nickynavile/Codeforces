#include<bits/stdc++.h>
#include<string>
using namespace std;

void c_p_c() {
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	c_p_c();

	//Taking input
	int n; string s; cin >> n;
	cin >> s;
	int count1 = 0, count2 = 0;

	//Code
	for (int i = 0; i < n; i++) {
		if (s[i] == 'A') {
			count1++;
		}
		else {
			count2++;
		}
	}

	//Output Printing
	if (count1 == count2) {
		cout << "Friendship";
	}
	else if (count1 > count2) {
		cout << "Anton";
	}
	else {
		cout << "Danik";
	}
	return 0;
}