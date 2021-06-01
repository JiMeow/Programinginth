#include <bits/stdc++.h>
using namespace std;
double xx=0;
double yy=0;
double n=0;
main(){

    char x[1000];
    char ans[1000];

    while(1){
    int z=0;
    n=0;
    cin >> x;
    if(x[0]=='*'){
        break;
    }
    int a=strlen(x);
    for(int i=0;i<=a;i++){
        if(x[i]<='9' && x[i]>='0'){
            x[i] -= 48;
            n=n*10+x[i];
        }else{
            ans[z]=x[i];
            z++;
        }
    }
        if(ans[0]=='N' && ans[1]=='E'){
            xx += (n*sqrt(2))/2;
            yy += (n*sqrt(2))/2;
        }
        else if(ans[0]=='N' && ans[1]=='W'){
            yy += (n*sqrt(2))/2;
            xx -= (n*sqrt(2))/2;
        }
        else if(ans[0]=='N'){
            yy += n;
        }
        else if(ans[0]=='E'){
            xx += n;
        }
        else if(ans[0]=='S' && ans[1]=='W'){
            yy -= (n*sqrt(2))/2;
            xx -= (n*sqrt(2))/2;
        }
        else if(ans[0]=='S' && ans[1]=='E'){
            yy -= (n*sqrt(2))/2;
            xx += (n*sqrt(2))/2;
        }
        else if(ans[0]=='S'){
            yy -= n;
        }
        else if(ans[0]=='W'){
            xx -= n;
        }
        //cout <<  xx  << " " << yy << endl;
    }

    printf("%.3f",xx);
    printf(" %.3f\n",yy);
    double kk=sqrt(yy*yy + xx*xx);
    printf("%.3f\n",kk);

}
