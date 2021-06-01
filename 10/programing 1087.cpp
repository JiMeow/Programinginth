#include<bits/stdc++.h>
using namespace std;
int x[300][300],k;
int r,c;
//int ans[305][305];
int maxx=-1000;
void check(int i,int j){
	int l=x[i][j];
	for(int ii=1;ii<=k;ii++){
		if(ii%2==0){
			if(ii+i<r){
				l += x[ii+i][j];
			}
			if(i-ii>=0){
				l += x[i-ii][j];
			}
		}
		else{
			if(ii+i<r){
				l -= x[ii+i][j];
			}
			if(i-ii>=0){
				l -= x[i-ii][j];
			}
		}
	}
	for(int jj=1;jj<=k;jj++){
		if(jj%2==0){
			if(jj+j<c){
				l += x[i][jj+j];
			}
			if(j-jj>=0){
				l += x[i][j-jj];
			}
		}
		else{
			if(jj+j<c){
				l -= x[i][jj+j];
			}
			if(j-jj>=0){
				l -= x[i][j-jj];
			}
		}
	}
	//ans[i][j]=l;
	maxx=max(maxx,l);
}
main(){
	cin >> r >> c >> k;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin >> x[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			check(i,j);
		}
	}
	/*for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << maxx;
}
