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
	int no; cin >> no;
	int arr [] = {100, 20, 10, 5, 1};
	int i = 0; int ans = 0;

	//Code
	while (no) {
		ans += no / arr[i];
		no = no % arr[i];
		i++;
	}

	//Printing Ans
	cout << ans;

	return 0;
}