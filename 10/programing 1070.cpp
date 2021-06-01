#include <bits/stdc++.h>
using namespace std;
main(){
    vector<int> x;
    int n,a;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a;
        x.push_back(a);
    }
    sort(x.begin(),x.end());
    if(x.size()==1 || x.size()==2){
        cout << "no";
    }
    else{
    if(x[0]+x[1] <= *(x.end()-1)){
        cout << "yes";
    }else{
        cout << "no";
    }
    }
}
