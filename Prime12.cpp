#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	vector <int> v;
	while(t--){
		int n,k;
		cin>>n>>k;
		int flag=0;
		int s=n;
		for(int i=2; i<=sqrt(n);i++){
			while(s%i==0){
				s/=i;
				v.push_back(i);
			}		
		}
		if(s>1)	v.push_back(s);
		if(k<=v.size()) cout << v[k-1];
		else cout << -1;
		cout<<endl;
		v.clear();
	}
}
