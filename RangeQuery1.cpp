#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	vector<int> v;
	cin>>t;
	while(t--){
		int n, q;
		cin >> n >> q; 
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		int a, b;
		for(int i=0; i<q; i++){
			cin >> a >> b;
			int sum=0;
			for(int j=a-1; j<=b-1; j++){
				sum+=v[j];
			}
			cout << sum << endl;
		}
		v.clear();
	    
	}
}
