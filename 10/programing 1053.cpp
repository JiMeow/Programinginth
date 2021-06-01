#include <bits/stdc++.h>
using namespace std;
int countt=0;
class A{
public:
    int xx;
    int yy;
    int r;
};

main(){
    int n;
    cin >> n;
    A a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].xx >> a[i].yy >> a[i].r;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((abs(a[i].xx-a[j].xx)*abs(a[i].xx-a[j].xx) + abs(a[i].yy-a[j].yy)*abs(a[i].yy-a[j].yy)) < ((a[i].r+a[j].r)*(a[i].r+a[j].r))){
                countt++;
            }
        }
    }
    cout << countt;
}
