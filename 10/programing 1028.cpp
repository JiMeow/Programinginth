#include <bits/stdc++.h>
using namespace std;
main(){
    map<string,int> ans;
    string a,b,c;
    int x;
    while(1){
        cin >> a;
        if(a=="#"){
            cin >> b;
            cout << ans[b] << endl;
        }
        else if(a=="!"){
            cout << "!";
            return 0;
        }
        else if(a=="="){
            cin >> b;
            cin >> x;
            ans[b]=x;
        }
        else{
            cin >> b >> c;
            if(a=="+"){
                ans[b] += ans[c];
            }
            if(a=="-"){
                ans[b] -= ans[c];
            }
            if(a=="*"){
                ans[b] *= ans[c];
            }
            if(a=="/"){
                ans[b] /= ans[c];
            }
        }
    }
}
