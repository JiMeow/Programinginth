#include <bits/stdc++.h>
using namespace std;
vector <char> x;
main(){
    int n;
    cin >> n;
    char k;
    for(int i=0;i<n;i++){
        cin >> k;
        x.push_back(k);
    }
    int again=1;
    while(again==1){
        if(x.size()==0){
            break;
        }
        again=0;
        for(int i=0;i<x.size()-1;i++){
            if(x[i]==x[i+1]){
                again=1;
                x.erase(x.begin()+i,x.begin()+i+2);
                break;
            }
        }
    }
    cout << x.size() << endl;
    if(x.size()==0){
        cout << "empty";
    }
    else{
    for(int i=x.size()-1;i>=0;i--){
        cout << x[i];
    }
    }
}
