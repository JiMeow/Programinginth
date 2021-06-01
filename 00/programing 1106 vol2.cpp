#include <bits/stdc++.h>
using namespace std;
main(){
    vector<int> x;
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        x.push_back(i);
    }
    int start=0;
    while(1){
        start = (start+k-1)%x.size();
        k = x[start];
        //x.erase(x.begin()+start,x.begin()+start+1);
        x.erase(x.begin()+start);
        if(x.size()==1) break;
    }
    cout << x[0];
}
