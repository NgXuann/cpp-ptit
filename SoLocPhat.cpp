#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int flat=1;
		for(int i=0; i<s.size(); i++){
			if(s[i] != '0' && s[i] != '6' && s[i] != '8'){
				cout<<"NO";
				flat=0;
				break;
			}
			
		}
		if(flat==1) cout << "YES";
		cout << endl;
	}
}
