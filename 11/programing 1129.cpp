#include <bits/stdc++.h>
using namespace std;
main(){
    int n,k;
    vector<int> x;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        x.push_back(i+1);
    }
    int start=0;
    while(1){
        start += k-1;
        start %= x.size();
        printf("%d\n",x[start]);
        x.erase(x.begin()+start);
        if(x.size()==0) break;
    }
}
