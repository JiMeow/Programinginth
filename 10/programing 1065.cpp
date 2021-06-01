#include <bits/stdc++.h>
using namespace std;
int countt,print;
class A{
public:
    int startj;
    int endi;
    int endj;
    int starti;
    A(int startj,int endi,int endj,int starti){
        this -> startj=startj;
        this -> endi=endi;
        this -> endj=endj;
        this -> starti=starti;
    }
};

main(){
    int n,m,a,b,c,d,i,j,k,l;
    scanf("%d",&n);
    scanf("%d",&m);
    vector<A> use;
    for(i=0;i<n;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        use.emplace_back(A(a,b,c,d));
    }
    for(i=0;i<m;i++){
        scanf("%d",&a);
        scanf("%d",&b);
        scanf("%d",&c);
        scanf("%d",&d);
        countt=0;
        for(j=0;j<use.size();j++){
                print=0;
            for(k=d;k<b;k++){
                for(l=a;l<c;l++){
                    if(k>=use[j].starti){
                        if(k<use[j].endi){
                            if(l>=use[j].startj){
                                if(l<use[j].endj){
                                    countt++;
                                    print++;
                                    break;
                                }
                            }
                        }
                    }
                }
                if(print>0){
                    break;
                }
            }
        }
        printf("%d\n",countt);
    }
}
