#include <bits/stdc++.h>
using namespace std;

void TestCase() {
	int n, m;
	cin >> n >> m;
	char a[n][m] = {'?'};
	// place Bs and Ws in alternating rows & cols
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if ((i + 1) & 1){
				a[i][j] = ((j + 1) & 1 ? 'B' : 'W');
			} else {
				a[i][j] = ((j + 1) & 1 ? 'W' : 'B');
			}
		}
	}
	
	//4x3 = even rows and odd cols
	//B W B
	//W B W
	//B W B
	//W B W <- replace A[N-1][M-1] with B
	
	//4x6 = both even rows and cols
	//B W B W B W
	//W B W B W B
	//B W B W B W <- replace A[N-2][M-1] with B
	//W B W B W B
	
	//3x4 = odd cols and even rows
	//B W B W
	//W B W B
	//B W B W <- replace A[N-1][M-1] with B
	
	// note: B = W + 1 (priority)
	// also, we don't need to change anything if
	// both the rows and cols are odd
	
	if ((n % 2 == 0 && m & 1) || (n & 1 && m % 2 == 0)) {
		a[n-1][m-1] = 'B';
	} else if (n % 2 == 0 && m % 2 == 0) {
		a[n-2][m-1] = 'B';
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i][j];
		}
		cout << '\n';
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

