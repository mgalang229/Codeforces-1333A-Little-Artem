#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n, m;
	cin >> n >> m;
	// it is enough to simply paint the upper left corner 
	// white and all the others black for any size of the board
	string black_row(m, 'B');
	vector<string> result(n, black_row);
	result[0][0] = 'W';
	for (int i = 0; i < n; i++) {
		cout << result[i] << '\n';
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	cin >> tc;
	for (int t = 0; t < tc; t++) {
		TestCase();
	}
	return 0;
}

