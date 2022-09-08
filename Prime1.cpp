#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
//uoc so nguyen to
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
				cout<<i<<" ";
				s/=i;
			}
		}
		if(s>1) cout << s;
		cout<<endl;
	}
}
