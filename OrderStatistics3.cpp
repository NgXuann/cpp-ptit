#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> v;
		int n,k;
		cin>>n>>k;
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				int x;
				cin>>x;
				v.push_back(x);
			}
		}
		sort(v.begin(), v.end());
		cout << v[k-1] << endl;
	}
}
