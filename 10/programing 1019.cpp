#include <bits/stdc++.h>
using namespace std;
main(){
    string a;
    string b;
    cin >> a >> b;
    int maxx=0;
    int maxxi;
    int maxxk;
    int n;
    n=min(a.size(),b.size());
    for(int i=0;i<a.size();i++){//start of a
        for(int j=0;j<b.size();j++){//start of b
            for(int k=n;k>=0;k--){//num of use
                    int countt=0;
                for(int l=0;l<k;l++){
                    if(i+l>a.size() || j+l>b.size()){
                        break;
                    }
                    if(a[i+l]==b[j+l]){
                        countt++;
                    }
                    if(countt==k){
                        if(k>maxx){
                            maxxi=i;
                            maxxk=k;
                        }
                        maxx=max(maxx,k);
                    }
                }
            }
        }
    }
    //cout << maxx;
    for(int i=maxxi;i<maxxi+maxxk;i++){
        cout << a[i];
    }
}
