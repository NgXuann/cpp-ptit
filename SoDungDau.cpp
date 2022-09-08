#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v;
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		int flat=0;
		for(int i=0; i<n-1; i++){
			flat=0;
			for(int j=i+1; j<n; j++){
				if(v[i]<=v[j]){
					flat=1;
					break;
				}
			}
			if(flat==0) cout << v[i] << " ";
		}
		cout << v[v.size()-1] ;
		cout << endl;
	}
}
