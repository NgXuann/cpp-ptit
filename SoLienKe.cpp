#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		vector<int> v;
		for(int i=0; i<s.size(); i++){
			int x = s[i] -'0';
			v.push_back(x);
		}
		int flat=0;
		for(int i=0; i<v.size()-1; i++){
			if(abs(v[i]-v[i+1]) != 1){
				flat=1;
				break;
			}
		}
		if(flat==0) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
