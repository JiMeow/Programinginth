#include<bits/stdc++.h>
using namespace std;
main(){
	int y,x,count=0;
	cin >> y >> x;
	char a[y][x];
	int b[x];
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			cin >> a[i][j];
		}
	}
	for(int i=0;i<x;i++){
		cin >> b[i];
	}
	for(int i=0;i<x;i++){
		count=0;
		for(int j=0;j<y;j++){
			if(a[j][i]=='O'){
				for(int k=1;k<=b[i];k++){
					a[j-k][i]='#';
					if(j-k<0){
                        break;
					}
				}
				count++;
				break;
			}
		}
		if(count==0){
			for(int k=1;k<=b[i];k++){
				a[y-k][i]='#';
			}
		}
	}


	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			cout << a[i][j];
		}
		cout << endl;
	}
}
