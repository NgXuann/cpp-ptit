#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		vector<int> v;
		int n, k;
		cin>>n>>k;
		for(int i=0; i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		for(int i=k; i<v.size(); i++){
			cout << v[i] << " ";
		}
		for(int i=0; i<k; i++)
		    cout << v[i] << " ";
		cout << endl;
	}
}
