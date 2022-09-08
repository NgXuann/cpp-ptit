#include<bits/stdc++.h>
using namespace std;

//(tong o vi tri chan - tong  vi tri le) neu chia het cho 11 thi dung
void check (string s){
	int n=s.size();
	int sumchan=0;
	int sumle=0;
	for(int i=0; i<n; i++){
		int temp = s[i]-'0';
		if(i%2==0){
			sumchan+= temp;
		}else{
			sumle+= temp;
		}
	}
	if((sumchan-sumle)%11==0) cout << 1 << endl;
	else cout << 0 << endl;	
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string a;
		cin>>a;
		check(a);
	}
}
