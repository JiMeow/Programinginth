#include <bits/stdc++.h>
using namespace std;
main(){
    vector<int> x;
    int n,k,ans=0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> k;
        x.push_back(k);
    }
    while(x.size()!=1 && x.size()!=0){
        int most=0;
        int use;
        for(int i=0;i<x.size()-1;i++){
            most=max(most,abs(x[i]-x[i+1]));
        }
        for(int i=0;i<x.size()-1;i++){
            if(abs(x[i]-x[i+1])==most){
                x.erase(x.begin()+i,x.begin()+i+2);
                //cout << most << " ";
                ans += most;
                break;
            }
        }
    }
    cout << ans;
}
