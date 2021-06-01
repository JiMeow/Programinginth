#include<bits/stdc++.h>
using namespace std;
main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	map<int,int> x;
	int n,m,a,b,use1;
	cin >> n >> m;
	string xx;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		x[a]++;
		x[b+1]--;
	}
	cin >> xx;
	if(xx[0]=='R'){
		use1=0;
	}
	if(xx[0]=='G'){
		use1=1;
	}
	if(xx[0]=='B'){
		use1=2;
	}
	//R=0,G=1,B=2;
	int ans=0,c=0,before;
	int sum = 0;
	for(auto& key:x){
        c++;
        if(c>1){
            if(sum%3>use1){
                ans += (3+use1-sum%3)*(key.first-before);
            }
            else if(sum%3<=use1){
                ans += (use1-sum%3)*(key.first-before);
            }
        }
        else{
            ans += use1*(key.first-1);
        }
        sum += key.second;
		before=key.first;
	}
	ans += (n-before+1)*use1;
	cout << ans;
}
