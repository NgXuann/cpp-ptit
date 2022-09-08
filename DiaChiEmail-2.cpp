#include<bits/stdc++.h>
using namespace std;

map<string, int> si;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		vector<string> v;
		
		for(int i=0; i<s.size(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z')
			   s[i] += 32;
		}
		
		stringstream ss;
		ss<<s;
		string b;
		while(ss>>b){
			v.push_back(b);
		}
		string c= "";
		c.insert(0, v[v.size()-1]);
		for(int i=0; i<v.size()-1; i++){
			string a;
			a = v[i];
			c.insert(c.end(), a[0]);
		}
		string feature = c;
		string res = feature;
		if(si[feature] != 0){
			int k = si[feature] +1;
			res += (k + '0');
		}
		si[feature] += 1;
		cout << res + "@ptit.edu.vn" << endl;
	}
}
