#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
	string s;
	cin >> s;
	set<char> se;
	for (char c : s) {
		if (c == '{' || c == '}' || c == ' ' || c == ',') {
			continue;
		} else {
			se.insert(c);
		}
	}
	int l = se.size();
    cout << l << endl;
	return 0;
}