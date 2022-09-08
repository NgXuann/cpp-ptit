#include<bits/stdc++.h>
using namespace std;
int b,k,n,a[100001];
void input() {
	cin >> n >> k >> b;
	for (int i = 0; i < n; i++) {
		a[i] = 1;
	}
	int temp;
	for (int i = 0; i < b; i++) {
		cin >> temp;
		a[temp-1] = 2;
	}
}

void solve() {
	int minn = 200000;
	int sum = 0;
	for (int i = 0; i < k; i++) {
		sum += a[i];
	}
	if (sum < minn) minn = sum;
	for (int i = k; i < n; i++) {
		sum = sum + a[i] - a[i-k];
		if (sum < minn) minn = sum;
	}
	cout << minn - k;
}

int main() {
	input();
	solve();
}
