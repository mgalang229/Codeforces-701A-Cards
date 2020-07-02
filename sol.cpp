#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void test_case() {
	int a[100], n;
	float sum = 0, tmp = 0;
	cin >> n;
	for(int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}
	tmp = (sum / n) * 2;
	for(int i = 0; i < n; ++i) {
		if(a[i] != 0) {	
			for(int j = 0; j < n; ++j) {
				if(a[i] + a[j] == tmp && i != j) {
					cout << i + 1 << " " << j + 1 << "\n";
					a[i] = 0;
					a[j] = 0;
				}
			}
		}
	}
}	

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	test_case();
}
