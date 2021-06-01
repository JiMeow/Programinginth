
#include <bits/stdc++.h>
using namespace std;
//int a,b,c,d,e,f,g,countt;
int ans[7];
int sor[7];
int use;
int countno0;
main(){
    string x;
    while(1){
    cin >> x;
    if(x=="!"){
        break;
    }
    for(int i=0;i<x.size();i++){
        if(x[i]=='A'){
            ans[0]++;
        }
        if(x[i]=='B'){
            ans[1]++;
        }
        if(x[i]=='C'){
            ans[2]++;
        }
        if(x[i]=='D'){
            ans[3]++;
        }
        if(x[i]=='E'){
            ans[4]++;
        }
        if(x[i]=='F'){
            ans[5]++;
        }
        if(x[i]=='G'){
            ans[6]++;
        }
    }
    for(int i=0;i<7;i++){
        sor[i]=ans[i];
    }
    sort(sor,sor+7);
    for(int i=0;i<7;i++){
        if(sor[i]>=0){
            if(i!=6){
            if(sor[i]==sor[i+1]){
                break;
            }
            else{
                use=sor[i];
                for(int j=0;j<7;j++){
                    if(ans[j]==use){
                        ans[j]=-1e9;
                        break;
                    }
                }
                break;
            }
        }
        }
    }
    }
    for(int i=0;i<7;i++){
        if(ans[i]>0){
            countno0++;
        }
    }
    cout << countno0 << endl;
    for(int i=0;i<7;i++){
        sor[i]=ans[i];
    }
    sort(sor,sor+7);
    for(int i=0;i<countno0;i++){
        for(int j=0;j<7;j++){
            if(sor[6-i]==ans[j]){
                printf("%c %d\n",j+65,sor[6-i]);
                ans[j]=-1e6;
            }
        }
    }
}
