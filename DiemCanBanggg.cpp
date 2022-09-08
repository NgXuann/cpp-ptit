#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int sumTrai(int k){
	int sumT=0;
	for(int i=0; i<k; i++)
	  sumT+=v[i];
	return sumT;
}

int sumPhai(int k){
	int sumP=0;
	for(int i=k+1; i<v.size(); i++)
	  sumP+=v[i];
	return sumP;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		
		for(int i=0; i<n; i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		int flat=0;
		for(int i=0; i<v.size(); i++){
			if(sumTrai(i) == sumPhai(i)){
				cout << i+1 << endl;
				flat=1;
				break;
			}
			  
		}
		if(flat==0) cout << -1 << endl;
		v.clear();
	}
}
