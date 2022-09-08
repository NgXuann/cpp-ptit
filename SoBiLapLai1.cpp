#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	vector <ll> v;
	cin>>t;
	ll n;
	while(t--){
		ll sum=0;
		ll dem=1;
		cin>>n;
		for(ll i=0; i<n; i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
//		1 1 3 3 3
//		dem=1, dem=2, sum=2
//		dem=1, dem=2
//		dem=3, sum=5
		for(ll i=0; i<n-1; i++){   
			if(v[i]==v[i+1]){
				dem++;
			}
			if(v[i]!=v[i+1] && dem>1){
				sum+=dem;
				dem=1;
			}
		}
		if(dem>1) sum+=dem;
		cout<<sum << endl;
		v.clear();
	}
}
