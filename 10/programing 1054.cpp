#include <bits/stdc++.h>
using namespace std;
unsigned long long int countt=0;

class A{
public:
    int xx;
    int yy;
    int r;
   A(int xx,int yy,int r){
        this -> xx=xx;
        this -> yy=yy;
        this -> r=r;
    }
};

struct SOR{
    bool operator()(const A& a, const A& b){
        if(a.xx!=b.xx){
             return  a.xx<b.xx;
        }
        return a.r<b.r;
    }
};

main(){
    int n;
    vector<A> a;
    cin >> n;
    //A a[100000];
    for(int i=0;i<n;i++){
        int k,kk,kkk;
        cin >> k >> kk >> kkk;
        //cin >> a[i].xx >> a[i].yy >> a[i].r;
        a.push_back(A(k,kk,kkk));
    }
    sort(a.begin(),a.end(),SOR());
    //sort(a,a+n,SOR());
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j].xx-a[i].xx>=20){
                break;
            }
            if(pow(a[j].xx-a[i].xx,2)+pow(a[j].yy-a[i].yy,2) < pow(a[i].r+a[j].r,2)){
                    countt++;
            }
        }
    }
    cout << countt;
}
