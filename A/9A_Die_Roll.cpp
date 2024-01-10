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
	int a, b; cin >> a >> b;

	//Main Logic
	int max1 = max(a, b);
	int no = 7 - max1;
	int hcf = __gcd(no, 6);
	cout << (no / hcf) << "/" << (6 / hcf);

	return 0;
}