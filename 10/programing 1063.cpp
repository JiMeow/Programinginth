#include <bits/stdc++.h>
using namespace std;
main(){
    vector<int> x[200][200];
    int n,c,endd=0;
    char a,b;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >> b >> c;
        if(a<b){
            char temp=a;
            a=b;
            b=temp;
        }
        endd=max(endd,(int)a);
        x[a][b].push_back(c);
    }
    sort(x['a']['X'].begin(),x['a']['X'].begin()+x['a']['X'].size());
    if(x['a']['X'].size()%2==0){
        cout << (float) (x['a']['X'][x['a']['X'].size()/2]+x['a']['X'][(x['a']['X'].size()-1)/2])/2;
    }else{
        cout << (float) (x['a']['X'][x['a']['X'].size()/2]);
    }
    cout << endl;

}
