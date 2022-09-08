#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	vector<string> v;
	string b;
	stringstream ss;
	ss << s; 
	while(ss>>b){
		v.push_back(b);
	}
	for(int i=0; i<v.size();i++){
		string a = v[i];
		if(i<v.size()-1){
			cout << a[0] << ".";
		}else cout << a[0];
		
	}
	
}
