#include<bits/stdc++.h>
using namespace std;
char k[26];
char a[30][30];
main(){
    int x,y;
    cin >> x >> y;
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(a[i][j]<='z' && a[i][j]>='a'){
                a[i][j]-=32;
            }
        }
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int print=0;
        cin >> k;
        int l=strlen(k);
        for(int j=0;j<l;j++){
            if(k[j]<='z' && k[j]>='a'){
                k[j]-=32;
            }
        }
        //diagonal,2,3,4
        //bottom
        //top
        //left
        //right
        for(int j=0;j<x;j++){
            for(int jj=0;jj<y;jj++){
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j][jj+ii] && jj+ii<y){//right
                            countt++;
                        }
                    }
                    if(countt==l && print==0){
                        cout << j+1 << " " << jj+1 << endl;
                        print++;
                    }
                }
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j][jj-ii]&& jj-ii>=0){//left
                            countt++;
                        }
                    }
                    if(countt==l && print==0){
                            cout << j+1 << " " << jj+1 << endl;
                            print++;
                    }
                }
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j+ii][jj] && j+ii<x){//bottom
                            countt++;
                        }
                    }
                    if(countt==l&& print==0){
                            cout << j+1 << " " << jj+1 << endl;
                            print++;
                    }
                }
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j-ii][jj]&& j-ii>=0){//top
                            countt++;
                        }
                    }
                    if(countt==l&& print==0){
                            cout << j+1 << " " << jj+1 << endl;
                            print++;
                    }
                }
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j-ii][jj-ii] && jj-ii>=0 && j-ii>=0){//diaganal
                            countt++;
                        }
                    }
                    if(countt==l&& print==0){
                            cout << j+1 << " " << jj+1 << endl;
                            print++;
                    }
                }
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j-ii][jj+ii] && jj+ii<y && j-ii>=0){//diagana2
                            countt++;
                        }
                    }
                    if(countt==l&& print==0){
                            cout << j+1 << " " << jj+1 << endl;
                            print++;
                    }
                }
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j+ii][jj-ii] && jj-ii>=0 && j+ii<x){//diagana3
                            countt++;
                        }
                    }
                    if(countt==l&& print==0){
                            cout << j+1 << " " << jj+1 << endl;
                            print++;
                    }
                }
                if(a[j][jj]==k[0]){
                    int countt=0;
                    for(int ii=0;ii<l;ii++){
                        if(k[ii]==a[j+ii][jj+ii] && jj+ii<y && j+ii<x){//diagana4
                            countt++;
                        }
                    }
                    if(countt==l&& print==0){
                            cout << j+1 << " " << jj+1 << endl;
                            print++;
                    }
                }
            }
        }
    }
}
