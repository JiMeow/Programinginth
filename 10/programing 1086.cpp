#include<bits/stdc++.h>
using namespace std;
int x[100000];
main(){
	int n,k,a,z;
	int curent=0;
	cin >> n >> k >> a;
	if(k==0){
		cout << "0";
	}
	else{
	for(int i=1;i<=n;i++){
		cin >> z;
		for(int j=curent;j<curent+z;j++){
			x[j]=i;
		}
		curent += z;
	}
	int maxx=0,ans1=0;
	for(int i=0;i<curent+z;i++){
		int ans=1;
		for(int j=i;j<i+(k-1)*a;j+=a){
			if(x[j]<x[j+a]) {
				ans++;
			}
		}
		if(maxx<ans){
			maxx=ans;
			ans1=i;
		}
	}
	cout << ans1+1 << " " << maxx;
	}
}
