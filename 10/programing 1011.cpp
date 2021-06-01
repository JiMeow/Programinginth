#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];
int score=0;
int x,y,minn=0;
int visit[1000][1000];

void fall(){
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(a[i+1][j]=='-'){
                if(a[i][j]!='#' && a[i][j]!='-'){
                    char swapp;
                    swapp=a[i][j];
                    a[i][j]=a[i+1][j];
                    a[i+1][j]=swapp;
                }
            }
        }
    }
}

void ff(int xx,int yy);

void num(){
for(int i=0;i<x;i++){
    fall();
}
int countt=0;
for(int i=0;i<x;i++){
    for(int j=0;j<y;j++){
            ff(i,j);
    }
}
    for(int ii=0;ii<x;ii++){
        for(int jj=0;jj<y;jj++){
            if(visit[ii][jj]==973){
                a[ii][jj]='-';;
                score += 5;
                countt++;
                visit[ii][jj]=0;
            }
        }
    }
    if(countt>0){
        num();
    }
}

void ff(int xx,int yy){
    int i=xx;
    int j=yy;
    if(a[i][j]==a[i+1][j] && (a[i][j]!='-'&& a[i][j]!='#') && visit[i+1][j]!=973){
        visit[i][j]=973;
        visit[i+1][j]=973;
        ff(i+1,j);
    }
    if(a[i][j]==a[i-1][j] && (a[i][j]!='-'&& a[i][j]!='#')&& visit[i-1][j]!=973){
        visit[i][j]=973;
        visit[i-1][j]=973;
        ff(i-1,j);
    }
    if(a[i][j]==a[i][j+1] && (a[i][j]!='-'&& a[i][j]!='#')&& visit[i][j+1]!=973){
        visit[i][j]=973;
        visit[i][j+1]=973;
        ff(i,j+1);
    }
    if(a[i][j]==a[i][j-1] && (a[i][j]!='-'&& a[i][j]!='#')&& visit[i][j-1]!=973){
        visit[i][j]=973;
        visit[i][j-1]=973;
        ff(i,j-1);
    }
}

main(){
    cin >> x >> y;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin >> a[i][j];
        }
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int _x,_y;
        char c;
        cin >> _x >> _y >> c;
        if(c=='L'){
            if(a[_x][_y-1]=='-'){
                char swapp;
                swapp=a[_x][_y-1];
                a[_x][_y-1]=a[_x][_y];
                a[_x][_y]=swapp;
                num();
            }
            else{
                minn += 5;
            }
        }
        if(c=='R'){
            if(a[_x][_y+1]=='-'){
                char swapp;
                swapp=a[_x][_y+1];
                a[_x][_y+1]=a[_x][_y];
                a[_x][_y]=swapp;
                num();
            }
            else{
                minn += 5;
            }
        }
    }
    cout << score-minn <<endl;

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
