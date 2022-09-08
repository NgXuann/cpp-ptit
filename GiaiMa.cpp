#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		for(int i=0; i<s.size(); i+=2){
			int n = s[i+1] - '0';
			for(int j=0; j<n; j++)
				cout << s[i];
		}
		cout << endl;
	}
}
