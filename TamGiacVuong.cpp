#include <bits/stdc++.h>
using namespace std;

bool solve(long long A[],int N){
    for(int i=N-1;i>=0;i--){
        int l=0,r=i-1;
        while(l<r){

            if(A[l]*A[l]+A[r]*A[r]>A[i]*A[i])r--;
            else if(A[l]*A[l]+A[r]*A[r]<A[i]*A[i])l++;
            else return true;
        }
    }
    return false;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        long long A[N];
        for(int i=0;i<N;i++)cin>>A[i];
        sort(A,A+N);
        bool ok = solve(A,N);
        if(ok)cout<<"YES";
        else cout<<"NO";
        cout<<endl;
    }
}
