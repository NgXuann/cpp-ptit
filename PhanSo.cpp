#include<bits/stdc++.h>
using namespace std;
int tu1, mau1, tu2, mau2, k=1;

void nhap(){
	cin >> tu1 >> mau1 >> tu2 >> mau2;
}
void quydong(){
	int u1 = __gcd(tu1, mau1);
	int u2 = __gcd(tu2,mau2);
	tu1 /= u1;  mau1 /= u1;
	tu2 /= u2;  mau2 /= u2;
	int bcnn = mau1*mau2  / __gcd(mau1, mau2);
	tu1 *= bcnn/mau1, tu2 *= bcnn/mau2 , mau1 = bcnn, mau2 = bcnn;
	cout << tu1 << "/" << mau1 << " " << tu2 << "/" << mau2 << endl;
}

void tong(){
	int tongtu = tu1 + tu2;
	int tongmau = mau1;
	int u = __gcd(tongtu, tongmau);
	cout << tongtu/u << "/" << tongmau/u << endl;
}

void thuong(){
	int thuongtu = tu1*mau2;
	int thuongmau = mau1*tu2;
	int u1 = __gcd(thuongtu, thuongmau);
	thuongtu /= u1, thuongmau /= u1;
	cout << thuongtu << "/" << thuongmau << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		cout << "Case #" << k++ << ":" << endl;
		quydong();
		tong();
		thuong();
	}
}
