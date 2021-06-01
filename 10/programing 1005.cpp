#include<bits/stdc++.h>
using namespace std;
main(){
    int x,wow=-1,maxx=0,count;
    int b,bb;
    vector<int> ans;
    vector<int> use;
    cin >> x; //8
    int a[x],l;
    for(int i=0;i<x;i++){
        cin >> a[i];
    }
    for(int i=0;i<x;i++){
        maxx+=a[i];
        use.push_back(a[i]);
        if(wow<maxx){
            ans=use;
            wow=maxx;
        }else{
            if(maxx>=0){

            }else{
                while(use.size()!=0){
                    use.pop_back();
                }
            }
        }
        if(maxx<0){
            maxx=0;
        }
    }
    if(wow>0){
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
        cout << endl << wow;
    }else{
        cout << "Empty sequence";
    }
}
