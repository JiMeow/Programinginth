#include <bits/stdc++.h>
using namespace std;
main(){
    int n,usei,usej;
    int minn=1000000;
    int _1=0,_2=0,_3=0;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            _1=0;
            _2=0;
            _3=0;
            for(int k=0;k<=i;k++){
                _1 += a[k];
            }
            for(int k=i+1;k<=j;k++){
                _2 += a[k];
            }
            for(int k=j+1;k<n;k++){
                _3 += a[k];
            }
            int use[3]={_1,_2,_3};
            //printf("i:%d j:%d 1=%d,2=%d,3=%d\n",i,j,_1,_2,_3);
            sort(use,use+3);
            int all=use[2]-use[0];
            //cout << all << endl;
            if(all<minn){
                usei=i;
                usej=j;
                minn=all;
            }
        }
    }
    cout << usei+2 << " " << usej+2 ;
}
