#include<bits/stdc++.h>
using namespace std;

int main(){
	bool check[105];
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int flag=0;
		for(int i=0; i<10; i++){
			check[i]=true;
		}
		vector<int> v;
		for(int i=0; i<s.size(); i++){
			if(s[0]=='0' || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') ){
				flag=1;
				break;
			}
			else{
				int x = s[i]-'0';
				check[x] = false;
			}
		}
		if(flag!=1){
			for(int i=0; i<10; i++){
			if(check[i]==true){
				flag=2;
				break;
			}
		}
		}
		if(flag==1) cout << "INVALID";
		else if (flag==2) cout << "NO";
		else cout << "YES";
		cout<<endl;
		
	}
}
