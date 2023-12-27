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

	//Taking Input
	string letter;
	cin >> letter;
	letter[0] = toupper(letter[0]);

	//Iterating over Output
	for (int i = 0; i < letter.length(); i++) {
		cout << letter[i];
	}
	return 0;
}