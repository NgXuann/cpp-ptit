#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i=0 ; i<n ; i++){
			cin >> a[i];
		}
		sort(a, a+n);
		int ans = INT_MAX;
		for(int i=1 ; i<n ; i++){
			if(a[i]-a[i-1] < ans) ans = a[i]-a[i-1];
		}
		cout << ans << endl;
	}
	return 0;
}
