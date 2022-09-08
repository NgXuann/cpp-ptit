#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int sum=0;
		for(int i=0; i<s.size(); i++){
			int x = s[i] -'0';
			sum+=x;
		}
		if(s[0] == '8' && s[s.size()-1] == '8' && sum%10==0)
		  cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}
