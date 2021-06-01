#include <bits/stdc++.h>
using namespace std;
main(){
    int a,counti=0,countv=0,countx=0,countl=0,countc=0;
    cin >> a;
    for(int i=1;i<=a;i++){
        if(i%5==1){
            counti++;
        }
        else if(i%5==2){
            counti+=2;
        }
        else if(i%5==3){
            counti+=3;
        }
        else if(i%5==4){
            counti+=1;
        }
        if(i%10==5){
            countv++;
        }
        else if(i%10==4){
            countv++;
        }
        else if(i%10==6){
            countv++;
        }
        else if(i%10==7){
            countv++;
        }
        else if(i%10==8){
            countv++;
        }
        if(i%50/10==1){
            countx++;
        }
        else if(i%50/10==2){
            countx+=2;
        }
        else if(i%50/10==3){
            countx+=3;
        }
        else if(i%50/10==4){
            countx++;
        }
        if(i%10==9){
            countx++;
        }
        if(i%100/10==4){
            countl++;
        }
        else if(i%100/10==5){
            countl++;
        }
        else if(i%100/10==6){
            countl++;
        }
        else if(i%100/10==7){
            countl++;
        }
        else if(i%100/10==8){
            countl++;
        }
        if(i/100==1){
            countc++;
        }
        else if(i/100==2){
            countc+=2;
        }
        else if(i/100==3){
            countc+=3;
        }
        if(i%100/10==9){
            countc++;
        }
    }
    cout << counti << " " << countv << " " << countx << " " << countl << " " << countc;
}
