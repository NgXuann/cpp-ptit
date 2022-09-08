#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	vector <ll> v;
	while(t--){
		ll n;
		cin>>n;
		ll s=n;
		for(ll i=2; i<=sqrt(n); i++){
			while(s%i==0){
				s/=i;
				v.push_back(i);
			}
		}
		if(s>1) v.push_back(s);
		cout << v[v.size()-1] << endl;
		v.clear();
	}
}
