#include <bits/stdc++.h>
using namespace std;
vector<int> x;
vector<int> ans;
main(){
    int n,k;
    cin >> n;
    int maxx=n;
    for(int i=0;i<n;i++){
        cin >> k;
        x.push_back(k);
    }
    if(n<3){
        cout << n;
    }
    else{
    sort(x.begin(),x.end());
    for(int i=0;i<n-1;i++){
        ans.push_back(x[i]+x[i+1]);
    }
    for(int i=0;i<ans.size();i++){
        int anss=0;
        for(int j=x.size()-1;j>=0;j--){
            if(ans[i]>x[j] && i+1 < j){
                anss += i + (x.size()-1 - j);
                maxx=min(anss,maxx);
                break;
            }
        }
    }
    cout << n-maxx;
    }
}
