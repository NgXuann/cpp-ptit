#include<bits/stdc++.h>
using namespace std;

int main(){
	string a, b, s;
	vector<string> v;
	getline(cin, a);
	getline(cin, b);
	stringstream ss;
	ss << a;
	while(ss>>s){
		v.push_back(s);
	}
	for( int i=0; i<v.size(); i++){
		if(v[i]==b)
		   v.erase(v.begin()+i);
	}
	for(int i=0 ;i <v.size(); i++){
		cout << v[i] << " ";
	}
}
