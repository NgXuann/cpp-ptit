#include<bits/stdc++.h>
using namespace std;
bool check[10];
typedef long long ll;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		vector <ll> v;
		for(ll i=0; i<10;i++)
			check[i] = false;
			
		for(ll i=0; i<n; i++){
			ll x=0; 
			cin>>x;
			v.push_back(x);
		}

		for(ll i=0; i<v.size(); i++){
			ll s=v[i];
			while(s){
				ll k = s%10;
				s/=10;
				check[k] = true;
			}
		}
		for(ll i=0; i<10; i++){
			if(check[i])
			  cout << i << " ";
		}
		cout << endl;
	}
}
