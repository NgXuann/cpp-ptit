#include<bits/stdc++.h>
using namespace std;


int main(){
	int n;
	cin>>n;
	int dem=0;
	for(int i=pow(10,n-1); i<pow(10,n); i++){
		int demchan=0, demle=0;
		int k=i;
		while(k>0){
			int s=k%10;
			if(s%2==0) demchan++;
			else demle++;
			k/=10;
		}
		if(demchan == demle){
			cout << i << " ";
			dem++;
		}
		if(dem%10==0) cout << endl;
		
	} 
}
