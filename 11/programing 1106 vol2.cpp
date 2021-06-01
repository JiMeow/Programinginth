#include <bits/stdc++.h>
using namespace std;
int minn[200010];
main(){
    vector<int> x;
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        x.push_back(i);
    }
    int start=0;
    int ii=0;
    start = (k)%(x.size()-ii);
    minn[start]=1;
    //cout << start;
    ii++;
    while(1){
        int jj=0;
        int s=start;
        while(1){
            if(minn[(start+jj)%(x.size()-ii)]==0){
                s--;
            }
            if(s==0) break;
            jj++;
        }
        while(minn[(start+jj)%(x.size()-ii)]==1){
            jj++;
        }
        cout << x[(start+jj)%(x.size()-ii)] << " ";
        minn[(start+jj)%(x.size()-ii)]=1;
        start = x[(start+jj)%(x.size()-ii)];
        //cout << start;
        ii++;
    }
}
