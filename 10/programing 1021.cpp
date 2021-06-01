#include <bits/stdc++.h>
using namespace std;
main(){
    priority_queue<int> a;
    int n,x;
    char k[2];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%s",&k);
        if(k[0]=='P'){
            scanf("%d",&x);
            a.push(x);
        }
        else{
            if(a.size()==0){
                printf("-1\n");
            }
            else{
                printf("%d\n",a.top());
                a.pop();
            }
        }
    }
}
