#include<bits/stdc++.h>
#include<string>
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
	int t; cin >> t; vector<int> v;
	for (int i = 0; i < t; i++) {
		int no;
		cin >> no;
		int a = 0;
		while (no) {
			int rem = no % 10;
			if (rem != 0) {
				v.push_back(rem * pow(10, a));
			}
			a++;
			no = no / 10;
		}
		//Printing Output;
		cout << v.size() << endl;
		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << " ";
		}
		cout << endl;
		v.clear();
	}


	return 0;
}