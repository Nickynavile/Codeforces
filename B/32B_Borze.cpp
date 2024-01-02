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
	string s; cin >> s; string ans = "";
	map<string, char> m;
	m["."] = '0';
	m["-."] = '1';
	m["--"] = '2';

	string str ="";
	for(int i=0; i<s.length(); i++){
		str += s[i];
		if(str == "." || str == "-." || str == "--"){
			ans += m[str];
			str ="";
		}
	}

	//Printing Output
	for(int i=0; i<ans.length(); i++){
		cout << ans[i];
	}

	return 0;
}