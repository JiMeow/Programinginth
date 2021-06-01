#include <bits/stdc++.h>
using namespace std;
main(){
    string a;
    int print=0;
    int printt=0;
    cin >> a;
    for(int i=0;i<a.size();i++){
        if(a[i]<='z' && a[i]>='a'){
            a[i] -= 32;
        }
    }
    int use=a.size()/2;
    for(int i=0;i<use;i++){
        if(a[i]!=a[a.size()-1-i]){
            print++;
        }
    }
    if(print>0){
        cout << "No";
    }
    else{
        for(int i=0;i<(use/2);i++){
            if(a[i]!=a[use-1-i]){
                printt++;
            }
        }
        if(printt>0){
            cout << "Palindrome";
        }else{
            cout << "Double Palindrome";
        }
    }
}
