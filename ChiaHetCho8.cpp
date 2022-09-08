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
		int temp=0;
		for(int i=0; i<s.size(); i++)
			sum += s[i]-'0';
			
		for(int i=s.size()-3; i<s.size(); i++){
			int x = s[i] -'0';
			temp = temp*10 + x;
		}
		cout << sum << " " << temp << endl;
	}
}
