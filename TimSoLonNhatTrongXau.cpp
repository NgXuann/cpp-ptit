#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		vector<ll> v;
		ll sum=0, n=s.size();
		int flat=0;
		for(ll i=0; i<n; i++){
			if(s[i] >= '0' && s[i] <= '9'){
				sum = sum*10 + (s[i]-'0');
				flat=1;
			}
			else if(flat){
				v.push_back(sum);
				sum=0;
				flat=0;
			}
		}
		if(flat) v.push_back(sum);
		sort(v.begin(), v.end());
		cout << v[v.size()-1] << endl;
		
	}
}
