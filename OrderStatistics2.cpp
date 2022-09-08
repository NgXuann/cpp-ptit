#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	vector<int> v;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin >> n;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		cout << v[n-1];
		cout << endl;
		v.clear();
	}
}
