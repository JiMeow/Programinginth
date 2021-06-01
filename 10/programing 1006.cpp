#include<bits/stdc++.h>
using namespace std;
char x[1001];
main(){
    int n;
    cin >> n;
    for(int l=0;l<n;l++){
    int a[7]={0,1,2,3,5,4,6};
    cin >> x;
    int k=strlen(x);
    for(int i=0;i<k;i++){
    if(x[i]=='F'){// 3 5
        a[0]=a[1];
        a[1]=a[4];
        a[4]=a[6];
        a[6]=a[2];
        a[2]=a[0];
    }
    else if(x[i]=='B'){ // 3 5
        a[0]=a[1];
        a[1]=a[2];
        a[2]=a[6];
        a[6]=a[4];
        a[4]=a[0];
    }
    else if(x[i]=='L'){// 2 4
        a[0]=a[1];
        a[1]=a[5];
        a[5]=a[6];
        a[6]=a[3];
        a[3]=a[0];
    }
    else if(x[i]=='R'){// 2 4
        a[0]=a[1];
        a[1]=a[3];
        a[3]=a[6];
        a[6]=a[5];
        a[5]=a[0];
    }
    else if(x[i]=='C'){//1 6
        a[0]=a[2];
        a[2]=a[5];
        a[5]=a[4];
        a[4]=a[3];
        a[3]=a[0];
    }
    else if(x[i]=='D'){//1 6
        a[0]=a[2];
        a[2]=a[3];
        a[3]=a[4];
        a[4]=a[5];
        a[5]=a[0];
    }
    }
    cout << a[2] << " ";
    }
}
