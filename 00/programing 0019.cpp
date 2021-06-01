#include<bits/stdc++.h>
using namespace std;
main(){
    int alls,allb;
    int n;
    cin >> n;
    int a[n],b[n],minn=1e9;
    for(int i=0;i<n;i++){
        cin >> a[i] >> b[i];
    }
    for(int i=1;i<pow(2,n);i++){
            vector<int> sweet,bad;
            stack<int> k;
            int l=i;
            alls=1;
            allb=0;
        for(int j=0;j<n;j++){
            k.push(l%2);
            l /= 2;
        }
        for(int ii=0;ii<n;ii++){
            if(k.top()==1){
                sweet.push_back(a[ii]);
                bad.push_back(b[ii]);
            }
            k.pop();
        }
        for(int jj=0;jj<sweet.size();jj++){
            alls *= sweet[jj];
            allb += bad[jj];
        }
        minn=min(minn,abs(alls-allb));
    }
    cout << minn;
}
