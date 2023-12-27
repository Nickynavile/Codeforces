#include<bits/stdc++.h>
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

	//Taking Input
	string num; cin >> num;
	int n = num.length();
	int count1 = 0, count2 = 0, count3 = 0;

	//Iterate and Count Eah Number
	for (int i = 0; i < n; i = i + 2) {
		if (num[i] == '1') {
			count1++;
		}
		else if (num[i] == '2') {
			count2++;
		}
		else if (num[i] == '3') {
			count3++;
		}
	}

	//Adding numbers to Ans
	string ans;
	while (count1--) {
		ans += "1+";
	}
	while (count2--) {
		ans += "2+";
	}
	while (count3--) {
		ans += "3+";
	}

	//printing Output
	for (int i = 0; i < ans.length() - 1; i++) {
		cout << ans[i];
	}
	return 0;
}