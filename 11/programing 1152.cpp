#include<bits/stdc++.h>
int ans[1000000];
int n;
std :: priority_queue<std :: pair<int,int>> pq;

main(){
    scanf("%d",&n);
    int ll;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&ll);
            pq.emplace(ll,i+j);
        }
    }
    int A=0;
    n *= n;
    while(n--){
        for(int i=pq.top().second;i>0;i--){
            if(ans[i]==0){
                ans[i]=1;
                A += pq.top().first;
                break;
            }
        }
        pq.pop();
    }
    printf("%d",A);
}
