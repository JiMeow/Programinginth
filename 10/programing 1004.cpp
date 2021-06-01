#include<bits/stdc++.h>
using namespace std;

main(){

    struct use{
        int c;
        int s;
};

    int nc,ns,a,b;
    cin >> nc >> ns;

    vector<use> we{};
    vector<use> last{};

    for(int i=0;i<ns;i++){
        cin >> a >> b;
        we.push_back({a,b});
    }

    char m='l';
    int x;
    while(m!='X'){
        int count=0;
        cin >> m;
        if(m=='E'){
            cin >> x;
            int k;
            for(int i=0;i<ns;i++){
                if(x==we[i].s){
                    k=we[i].c;
                    break;
                }
            }
                for(int i=0;i<last.size();i++){
                    if(k==last[i].c){
                        for(int j=i;j<last.size();j++){
                            if(last[j].c==last[i].c){
                                if(j+1==last.size()){
                                    last.push_back({k,x});
                                    count++;
                                    break;
                                }
                            }else{
                                last.insert(last.begin()+j,{k,x});
                                count++;
                                break;
                            }
                        }
                        break;
                    }
                }
                if(count==0){
                    last.push_back({k,x});
                }
            }
        else if(m=='D'){
                if(last.size()==0){
                    cout << "0" << endl;
                }
                else{
                    cout << last[0].s << endl;
                    last.erase(last.begin());
                }
        }
    }
    cout << "0" << endl;
}
