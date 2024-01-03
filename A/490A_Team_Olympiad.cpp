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
	int n; cin >> n; int arr[n];
	int code = 0, math = 0, pe = 0;
	vector<int> icode;
	vector<int> imath;
	vector<int> ipe;

	//Main Logic
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		arr[i] = no;
		if (no == 1) {
			code++;
			icode.push_back(i + 1);
		}
		else if (no == 2) {
			math++;
			imath.push_back(i + 1);
		}
		else if (no == 3) {
			pe++;
			ipe.push_back(i + 1);
		}
	}

	//Printing Output
	int temp = min(code, math);
	int ans = min(temp, pe);
	cout << ans << endl;

	int i = 0;
	while (ans--) {
		cout << icode [i] << " " << imath[i] << " " << ipe[i] << endl;
		i++;
	}

	return 0;
}