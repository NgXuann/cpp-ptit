#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int flag=0;
		for(int i=n-1; i>=1; i--){
			for(int j =i-1; j>=0; j--){
				if(s[i]<s[j]){
					swap(s[i], s[j]);
					if(s[0] == '0')
					   continue;
					flag=1;
					break;
				}
			}
			if(flag)
			  break;
		}
		if(!flag)
		   cout <<-1<<endl;
		else
		   cout <<s<<endl;
	}
}
