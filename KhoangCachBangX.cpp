#include <bits/stdc++.h>
using namespace std;

int t, n, x, a[100001], b[100001];

void nhap(){
    cin>>n>>x;
    for(int i = 0; i <= 100000; i++)
        b[i] = 0;
    for(int i = 0; i < n; i++)
    {
       cin>>a[i];
       b[a[i]]++;
    }
}
//6 78
//5 20 3 2 5 80
//
//2 3  5      20     80
//1 1  2       1      1  
int in(){
    for(int i = 0; i <= 100000; i++)
    {
        if(b[i])
        {
            if(b[abs(x-i)])
                return 1;
        }
    }
    return -1;
}
int main(){
    cin>>t;
    while (t--)
    {
        nhap();
        cout<<in()<<endl;
    }
}
