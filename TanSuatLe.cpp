#include<bits/stdc++.h>
using namespace std;
int t, n, a[100005], b[1000005];

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		memset(b, 0, sizeof(b));
		for(int i=0; i<n; i++){
			cin >> a[i];
			b[a[i]]++;
		}
		for(int i=0; i<n; i++){
			if(b[a[i]] %2 != 0){
				cout <<a[i] << endl;
				break;
			}
		}
	}
	return 0;
}
