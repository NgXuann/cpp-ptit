#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n+5];
		for(int i = 0 ; i < n ; i++)
			cin>>a[i];
		sort(a , a+n);
		int dem = 1;
		vector<int> v;
		v.clear();
		for(int i = 0 ; i < n  ; i++){
			if(a[i+1] == a[i]){
				dem++;
			}else {
				v.push_back(dem);
				dem = 1;
			}
		}
		int res = 0;
		for(int i = 0 ; i < v.size() ; i++)
			if(v[i] > 1){
				res += v[i];
			}
		cout<<res<<endl;
	}
	return 0;
}
