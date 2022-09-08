#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		vector<char> v;
		int flat=1;
		for(int i=s.size()-1; i>=0; i--){
			v.push_back(s[i]);
		}

		for(int i=0; i<s.size(); i++){
			if(s[i] != v[i]){
				cout << "NO";
				flat=0;
				break;
			}
		}
		if(flat==1) cout << "YES";
		cout <<endl;
	}
}
