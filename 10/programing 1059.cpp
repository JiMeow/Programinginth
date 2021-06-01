#include <bits/stdc++.h>
using namespace std;
vector <char> ans;
char _2[3]={'A','B','C'};
char _3[3]={'D','E','F'};
char _4[3]={'G','H','I'};
char _5[3]={'J','K','L'};
char _6[3]={'M','N','O'};
char _7[4]={'P','Q','R','S'};
char _8[3]={'T','U','V'};
char _9[4]={'W','X','Y','Z'};
void check(int q,int p){
    if(q==1){
        for(int i=0;i<p;i++){
            if(ans.size()!=0){
                ans.pop_back();
            }
        }
    }
    if(q==2){
        ans.push_back(_2[(p-1)%3]);
    }
    if(q==3){
        ans.push_back(_3[(p-1)%3]);
    }
    if(q==4){
        ans.push_back(_4[(p-1)%3]);
    }
    if(q==5){
        ans.push_back(_5[(p-1)%3]);
    }
    if(q==6){
        ans.push_back(_6[(p-1)%3]);
    }
    if(q==7){
        ans.push_back(_7[(p-1)%4]);
    }
    if(q==8){
        ans.push_back(_8[(p-1)%3]);
    }
    if(q==9){
        ans.push_back(_9[(p-1)%4]);
    }
}

main(){
    int n,x,y,delx,dely;
    cin >> n;
    scanf("%d%d",&x,&y);
    check(x,y);
    for(int i=0;i<n-1;i++){
        scanf("%d",&delx);
        scanf("%d",&dely);
        scanf("%d",&y);
        check(x+delx+3*dely,y);
        x=x+delx+3*dely;
    }
    int null=0;
    for(int i=0;i<ans.size();i++){
        cout << ans[i];
        null++;
    }
    if(null==0){
        cout << "null";
    }
}
