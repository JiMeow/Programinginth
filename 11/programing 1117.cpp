#include <bits/stdc++.h>
using namespace std;
main(){
    int n,k1,k2;
    cin >> n;
    vector<int> x;
    for(int i=0;i<n;i++){
        cin >> k1 >> k2;
        x.push_back(k2-2*k1);
    }
    sort(x.begin(),x.end());
    unsigned long long int ans=0;
    while(1){
        if(pow(x.size()-1,2)-pow(x.size(),2)<x[x.size()-1] && x.size()>=1){
            ans += (unsigned long long int) x[x.size()-1];
            x.erase(x.end()-1);
            if(x.size()==0) break;
        }
        else{
            break;
        }
    }
    printf("%lld",ans-(unsigned long long int)pow(x.size(),2));
}
