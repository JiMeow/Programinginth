#include<bits/stdc++.h>
using namespace std;
stack<int> a;
int n;
int nn[101];
char use[101][3]; //when want use let use only array[i][j][1]
void random(int i){
    while(a.size()!=n){
        a.push(i%2);
        i /= 2;
    }
}
main(){
    int k;
    cin >> k;
    for(int i=0;i<k;i++){// ประพจน์ย่อย
        int x, y;
        cin >> x >> y; //ประพจน์และคำถาม
        for(int j=0;j<x;j++){ //จำนวนในประพจน์
            int xx;
            cin >> xx;
            for(int k=n;k<xx;k++){ //ใส่ค่าประพจน์แบบไม่สนนิเสธ
                cin >> use[k];
            }
            n += xx;
            nn[j]=xx;
        }
        for(int j=0;j<pow(2,n);j++){
            random(j);
            int ss=a.size();
            for(int k=0;k<ss;kk++){

            }
        }
    }


}
