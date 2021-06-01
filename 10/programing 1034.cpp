#include <bits/stdc++.h>
using namespace std;
int x[8][8];
void check(int m,int n){
    int color=x[m][n];

    int l=1;
    while(1){
        if(m-l<0){
            break;
        }
        if(x[m-l][n]==0){
            break;
        }
        if(x[m-l][n]==color){
            for(int i=m-l+1;i<m;i++){
                x[i][n]=color;
            }
            break;
        }
        l++;
    }

     l=1;
    while(1){
        if(m+l>7){
            break;
        }
        if(x[m+l][n]==0){
            break;
        }
        if(x[m+l][n]==color){
            for(int i=m+1;i<m+l;i++){
                x[i][n]=color;
            }
            break;
        }
        l++;
    }

     l=1;
    while(1){
        if(n-l<0){
            break;
        }
        if(x[m][n-l]==0){
            break;
        }
        if(x[m][n-l]==color){
            for(int i=n-l+1;i<n;i++){
                x[m][i]=color;
            }
            break;
        }
        l++;
    }

     l=1;
    while(1){
        if(n+l>7){
            break;
        }
        if(x[m][n+l]==0){
            break;
        }
        if(x[m][n+l]==color){
            for(int i=n+1;i<n+l;i++){
                x[m][i]=color;
            }
            break;
        }
        l++;
    }

    l=1;
    while(1){
        if(x[m+l][n+l]==0){
            break;
        }
        if(x[m+l][n+l]==color){
            for(int i=1;i<l;i++){
                x[m+i][n+i]=color;
            }
            break;
        }
        l++;
    }

    l=1;
    while(1){
        if(x[m+l][n-l]==0){
            break;
        }
        if(x[m+l][n-l]==color){
            for(int i=1;i<l;i++){
                x[m+i][n-i]=color;
            }
            break;
        }
        l++;
    }

    l=1;
    while(1){
        if(x[m-l][n-l]==0){
            break;
        }
        if(x[m-l][n-l]==color){
            for(int i=1;i<l;i++){
                x[m-i][n-i]=color;
            }
            break;
        }
        l++;
    }

    l=1;
    while(1){
        if(x[m-l][n+l]==0){
            break;
        }
        if(x[m-l][n+l]==color){
            for(int i=1;i<l;i++){
                x[m-i][n+i]=color;
            }
            break;
        }
        l++;
    }
}

main(){
    //1: white
    //2: black
    x[3][3]=1;
    x[4][4]=1;
    x[3][4]=2;
    x[4][3]=2;
    int n,xx,yy;
    char xxx;
    int countt=0;
    cin >> n;
    while(1){
        cin >> xxx >> yy;
        if(xxx=='a'){
            xx=1;
        }
        if(xxx=='b'){
            xx=2;
        }
        if(xxx=='c'){
            xx=3;
        }
        if(xxx=='d'){
            xx=4;
        }
        if(xxx=='e'){
            xx=5;
        }
        if(xxx=='f'){
            xx=6;
        }
        if(xxx=='g'){
            xx=7;
        }
        if(xxx=='h'){
            xx=8;
        }
        x[yy-1][xx-1]=2;
        check(yy-1,xx-1);
        countt++;
        if(countt==n) break;
        cin >> xxx >> yy;
        if(xxx=='a'){
            xx=1;
        }
        if(xxx=='b'){
            xx=2;
        }
        if(xxx=='c'){
            xx=3;
        }
        if(xxx=='d'){
            xx=4;
        }
        if(xxx=='e'){
            xx=5;
        }
        if(xxx=='f'){
            xx=6;
        }
        if(xxx=='g'){
            xx=7;
        }
        if(xxx=='h'){
            xx=8;
        }
        x[yy-1][xx-1]=1;
        check(yy-1,xx-1);
        countt++;
        if(countt==n) break;
    }

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(x[i][j]==0){
                cout << ".";
            }
            if(x[i][j]==1){
                cout << "O";
            }
            if(x[i][j]==2){
                cout << "X";
            }
        }
        cout << endl;
    }
}
