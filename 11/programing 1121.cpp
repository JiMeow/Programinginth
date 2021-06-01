#include <bits/stdc++.h>
using namespace std;
main(){
    string h;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int print=0;
        cin >> h;
        vector<int> x;
        for(int j=0;j<h.size();j++){
            if(h[j]=='('){
                x.push_back(1);
            }
            if(h[j]==')'){
                x.push_back(-1);
            }
            if(h[j]=='{'){
                x.push_back(2);
            }
            if(h[j]=='}'){
                x.push_back(-2);
            }
            if(h[j]=='['){
                x.push_back(3);
            }
            if(h[j]==']'){
                x.push_back(-3);
            }
        }
        while(x.size()!=0){
                for(int j=0;j<x.size();j++){
                    cout << x[j] << " ";
                }
            for(int j=x.size()-1;j>=0;j--){
                if(x[0]>0 && x[j]==-x[0]){
                    int _1=0;
                    int _2=0;
                    int _3=0;
                    for(int k=1;k<j;k++){
                        if(x[k]==1 || x[k]==-1){
                            _1++;
                        }
                        if(x[k]==2 || x[k]==-2){
                            _2++;
                        }
                        if(x[k]==3 || x[k]==-3){
                            _3++;
                        }
                    }
                    if(_1%2==0 && _2%2==0 && _3%2==0){
                        x.erase(x.begin()+j,x.begin()+j+1);
                        x.erase(x.begin(),x.begin()+1);
                    }
                    else{
                        cout << _1 << " " << _2 << " " << _3 << endl;
                        cout << "no" << endl;
                        print++;
                        if(print==1){
                            break;
                        }
                    }
                    break;
                }
                else{
                        cout << "no" << endl;
                        print++;
                        if(print==1){
                            break;
                        }
                    }
            }
            if(print==1){
                break;
            }
        }
        if(print==0)
        cout << "yes" << endl;
    }
}
