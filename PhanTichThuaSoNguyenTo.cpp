#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll check(ll n){
	if(n<2) return 0;
	for(ll i=2; i<=sqrt(n); i++)
	   if(n%i==0)
	     return 0;
	return 1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll s=n;
		vector<ll> v;
		for(ll i=2; i<=sqrt(n); i++){
			while(s%i==0){
				v.push_back(i);
				s/=i;
			}
		}
		if(s>1) v.push_back(s);
		sort(v.begin(), v.end());
		ll dem=1;
		for(ll i=0; i<v.size(); i++){
			if(v[i]==v[i+1]){
				dem++;
			}
			else{
				cout << v[i] << " "<< dem << " ";
				dem=1;
			}
		}
		cout<<endl;
	}
}
