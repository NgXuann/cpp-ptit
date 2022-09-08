#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	vector <int> v;
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++){
			int x;
			cin >> x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		int flag=0;
		int k, m;
		for(int i=0; i<v.size(); i++){
			if(v[i]>v[0]){
				k=v[i];
				m=v[0];
				flag=1;
				break;
			}
		}
		if(flag==0) cout<<-1;
		else cout << v[0] << " " << k;
		v.clear();
		cout << endl;
	}
	
}
