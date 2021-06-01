#include<stdlib.h>
#include<stdio.h>
#include<string.h>
main(){
	struct team{
		int score=0;
		char name[21];
		int win=0,lost=0,end=0;
	}team[6],gg;
	int a[4][4];
	for(int i=1;i<=4;i++){
		scanf("%s",&team[i-1].name);
	}
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			scanf("%d",&a[i-1][j-1]);
		}
	}
	
	for(int i=1;i<=4;i++){
		for(int j=1;j<=4;j++){
			team[i-1].win=team[i-1].win+a[i-1][j-1];
			team[i-1].lost=team[i-1].lost+a[j-1][i-1];
		}
	}
	
	for(int i=0;i<4;i++){
		for(int j=i+1;j<4;j++){
			if(a[i][j]>a[j][i]){
				team[i].score=team[i].score+3;
			}
			else if(a[i][j]<a[j][i]){
				team[j].score=team[j].score+3;
			}
			else if(a[i][j]==a[j][i]){
				team[i].score=team[i].score+1;
				team[j].score=team[j].score+1;
			}
		}
	}
	int j;
	for(int i=0;i<4;i++){
		for( j=i+1;j<4;j++){
			if(team[i].score<team[j].score){
				gg=team[i];
				team[i]=team[j];
				team[j]=gg;
			}
		}
	for(int i=0;i<3;i++){
		if(team[i].score==team[i+1].score){
			if(team[i].win-team[i].lost > team[i+1].win-team[i+1].lost){
				
			}
			else if(team[i].win-team[i].lost < team[i+1].win-team[i+1].lost){
				gg=team[i];
				team[i]=team[i+1];
				team[i+1]=gg;
			}
			else{
				if(team[i].win<team[i+1].win){
					gg=team[i];
					team[i]=team[i+1];
					team[i+1]=gg;
				}
			}
		}
	}

	}
	for(int i=0;i<4;i++){
		printf("%s ",team[i].name);
		printf("%d\n",team[i].score);
	}
}
