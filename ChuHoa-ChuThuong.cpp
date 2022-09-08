#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		for(int i=0; i<s.size(); i++){
			if(s[i] >= 'A' && s[i] <= 'Z')
			   s[i] += 32;
			else if(s[i] >= 'a' && s[i] <= 'z')
		    	s[i] -= 32;
		}
		cout << s << endl;
	}
}
