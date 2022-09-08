#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> v;
		for(ll i=1; i<=sqrt(n); i++){
			ll j=n/i;
			if(i==j){
				v.push_back(i);
			}
			else{
				v.push_back(i);
				v.push_back(j);
			}
		}
		sort(v.begin(), v.end());
		ll dem=0;
		for(ll i=0; i<v.size();i++){
			if(v[i]%2==1)
			  dem++;
		}
		cout << dem << endl;
	}
}

