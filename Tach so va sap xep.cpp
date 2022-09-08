#include<bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
	int t;
	cin>>t;
	vector<ll> v;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		ll sum=0, n=s.size();
		int flag=0;
		for(int i=0; i<n; i++){
			if(s[i] >= '0' && s[i] <= '9'){
				sum = sum*10 + (s[i]-'0');
				flag=1;
			}
			else if(flag){
				v.push_back(sum);
				sum=0;
				flag=0;
			}
		}
		if(flag) v.push_back(sum);
	}
	sort(v.begin(), v.end());
	for(int i=0; i<v.size(); i++){
		cout<<v[i]<<endl;
	}
}
