#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int summ;
int n;
int fail;
int all[1000000];
void checkx(int x){ //แนวยาว
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[x][i];
    }
    if(sum!=summ){
        fail++;
    }
}

void checky(int y){ //แนวตั้ง
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i][y];
    }
    if(sum!=summ){
        fail++;
    }
}

void obique(){
    int sum=0;
    for(int i=0;i<n;i++){
        sum += a[i][i];
    }
    if(sum!=summ){
        fail++;
    }
    sum=0;
    for(int i=0;i<n;i++){
        sum += a[i][n-1-i];
    }
    if(sum!=summ){
        fail++;
    }
}

main(){
    cin >> n;
    fail=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
            if(all[a[i][j]]>0){
                fail++;
            }
            else{
            all[a[i][j]]++;
            }
        }
    }
    for(int i=0;i<n;i++){
        summ += a[0][i];
    }
    for(int i=0;i<n;i++){
        checkx(i);
        checky(i);
    }
    obique();
    if(fail>0){
        cout << "No";
    }else{
        cout << "Yes";
    }
}
