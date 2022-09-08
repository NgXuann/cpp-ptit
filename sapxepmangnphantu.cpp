#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int n,k;
	vector<int> v;
	while(t--){
		cin >> n >> k;
		for (int i=0; i<n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		for(int  i=n-1; i > n-1-k; i--)
		cout << v[i] << " ";

	
		cout << endl;
		v.clear();
	}

}
