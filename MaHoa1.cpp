#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	vector <string> v;
	cin >> t;
	cin.ignore();
	while(t--){
		int dem=1;
		string s;
		cin >> s;
		for(int i=0; i<s.size(); i++){
			if(s[i]!=s[i+1]){
				cout << dem << s[i];
				dem=1;
			}
			else{
				dem++;
			}
		}
		cout << endl;
	}
}
