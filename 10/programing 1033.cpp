#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int visit[101][101];
int num1,num2,num3,num4;
char use[1000000];
main(){
    //1 SE
    //2 WW
    //3 NN
    //4 ES
    int n,k;
    cin >> n >> k;
    pair<int,int> _1={0,n-1};
    pair<int,int> _2={n-1,n-1};
    pair<int,int> _3={n-1,0};
    pair<int,int> _4={0,0};
    a[0][n-1]=1;
    a[n-1][n-1]=2;
    a[n-1][0]=3;
    a[0][0]=4;
    for(int i=0;i<4*k;i++){
        cin >> use[i];
    }
    for(int i=0;i<k;i++){
            if(use[(i)]=='N'){
                if(_1.first !=0 &&visit[_1.first-1][_1.second]==0){
                        visit[_1.first][_1.second]=0;
                    _1.first--;
                    a[_1.first][_1.second]=1;
                    visit[_1.first][_1.second]=1;
                }
            }
            if(use[(i)]=='E'){
                if(_1.second!=n-1 && visit[_1.first][_1.second+1]==0){
                        visit[_1.first][_1.second]=0;
                    _1.second++;
                    a[_1.first][_1.second]=1;
                    visit[_1.first][_1.second]=1;
                }
            }
            if(use[(i)]=='S'){
                if(_1.first!=n-1 && visit[_1.first+1][_1.second]==0){
                        visit[_1.first][_1.second]=0;
                    _1.first++;
                    a[_1.first][_1.second]=1;
                    visit[_1.first][_1.second]=1;
                }
            }
            if(use[(i)]=='W'){
                 if(_1.second!=0 && visit[_1.first][_1.second-1]==0){
                        visit[_1.first][_1.second]=0;
                     _1.second--;
                     a[_1.first][_1.second]=1;
                     visit[_1.first][_1.second]=1;
                }
            }

            if(use[k+i]=='N'){
                if(_2.first!=0 && visit[_2.first-1][_2.second]==0){
                        visit[_2.first][_2.second]=0;
                    _2.first--;
                    a[_2.first][_2.second]=2;
                    visit[_2.first][_2.second]=1;
                }
            }
            if(use[k+i]=='E'){
                if(_2.second!=n-1 && visit[_2.first][_2.second+1]==0){
                        visit[_2.first][_2.second]=0;
                    _2.second++;
                    a[_2.first][_2.second]=2;
                    visit[_2.first][_2.second]=1;
                }
            }
            if(use[k+i]=='S'){
                if(_2.first!=n-1 && visit[_2.first+1][_2.second]==0){
                        visit[_2.first][_2.second]=0;
                    _2.first++;
                    a[_2.first][_2.second]=2;
                    visit[_2.first][_2.second]=1;
                }
            }
            if(use[k+i]=='W'){
                 if(_2.second!=0&& visit[_2.first][_2.second-1]==0){
                    visit[_2.first][_2.second]=0;
                     _2.second--;
                     a[_2.first][_2.second]=2;
                 visit[_2.first][_2.second]=1;
                }
            }

            if(use[(2*k)+i]=='N'){
                if(_3.first!=0 && visit[_3.first-1][_3.second]==0){
                        visit[_3.first][_3.second]=0;
                    _3.first--;
                    a[_3.first][_3.second]=3;
                    visit[_3.first][_3.second]=1;
                }
            }
            if(use[(k*2)+i]=='E'){
                if(_3.second!=n-1 && visit[_3.first][_3.second+1]==0){
                        visit[_3.first][_3.second]=0;
                    _3.second++;
                    a[_3.first][_3.second]=3;
                    visit[_3.first][_3.second]=1;
                }
            }
            if(use[(2*k)+i]=='S'){
                if(_3.first!=n-1 && visit[_3.first+1][_3.second]==0){
                        visit[_3.first][_3.second]=0;
                    _3.first++;
                    a[_3.first][_3.second]=3;
                    visit[_3.first][_3.second]=1;
                }
            }
            if(use[(k*2)+i]=='W'){
                 if(_3.second!=0 && visit[_3.first][_3.second-1]==0){
                        visit[_3.first][_3.second]=0;
                     _3.second--;
                     a[_3.first][_3.second]=3;
                     visit[_3.first][_3.second]=1;
                }
            }

            if(use[(3*k)+i]=='N'){
                if(_4.first!=0 && visit[_4.first-1][_4.second]==0){
                        visit[_4.first][_4.second]=0;
                    _4.first--;
                    a[_4.first][_4.second]=4;
                    visit[_4.first][_4.second]=1;
                }
            }
            if(use[(3*k)+i]=='E'){
                if(_4.second!=n-1 && visit[_4.first][_4.second+1]==0){
                        visit[_4.first][_4.second]=0;
                    _4.second++;
                    a[_4.first][_4.second]=4;
                    visit[_4.first][_4.second]=1;
                }
            }
            if(use[(3*k)+i]=='S'){
                if(_4.first!=n-1 && visit[_4.first+1][_4.second]==0){
                    visit[_4.first][_4.second]=0;
                    _4.first++;
                    a[_4.first][_4.second]=4;
                    visit[_4.first][_4.second]=1;
                }
            }
            if(use[(3*k)+i]=='W'){
                 if(_4.second!=0 && visit[_4.first][_4.second-1]==0){
                    visit[_4.first][_4.second]=0;
                     _4.second--;
                     a[_4.first][_4.second]=4;
                     visit[_4.first][_4.second]=1;
                }
            }
        }
        /*for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }*/
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(a[i][j]==1){
                    num1++;
                }
                else if(a[i][j]==2){
                    num2++;
                }
                else if(a[i][j]==3){
                    num3++;
                }
                else if(a[i][j]==4){
                    num4++;
                }
                else if(a[i][j]==0){
                    cout << "No";
                    return 0;
                }
            }
        }
        int maxx=0;
        maxx=max(maxx,num1);
        maxx=max(maxx,num2);
        maxx=max(maxx,num3);
        maxx=max(maxx,num4);
        int z=0;
        if(maxx==num1){
            z++;
        }
        if(maxx==num2){
            z++;
        }
        if(maxx==num3){
            z++;
        }
        if(maxx==num4){
            z++;
        }
        cout << z << " " << maxx <<endl;
        if(maxx==num1){
            cout << "1\n";
        }
        if(maxx==num2){
            cout << "2\n";
        }
        if(maxx==num3){
            cout << "3\n";
        }
        if(maxx==num4){
            cout << "4\n";
        }
}
