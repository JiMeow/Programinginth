#include<bits/stdc++.h>
using namespace std;
int a[10001];
int glcd(int x,int y){
    if(x<y){
        int temp=x;
        x=y;
        y=temp;
    }
    int k;
    while(1){
        k=x%y;
        x=y;
        y=k;
        if(k==0){
            return x;
        }
    }
}
main(){
    int n,z;
    deque <int> ans;
    long long int x,use;
    cin >> n;
    for(int i=0;i<n;i++){
        int print=0;
        cin >> x;
        if(x==1){
            cout << "NO" << endl;
            print++;
        }
        fill(a,a+10001,0);
        z=2;
        while(x!=1){
            if(x%z==0){
                x /= z;
                a[z]++;
                z=2;
            }
            else{
                z++;
                if(z>=10001){
                    print++;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
    if(print>0){
        continue;
    }
        for(int j=0;j<=10000;j++){
            if(a[j]!=0){
                ans.push_back(a[j]);
            }
        }
        if(ans.size()==1){
            if(ans[0]==1){
                cout << "NO" << endl;
            }
            else{
            cout << ans[0] <<endl;
            ans.pop_front();
            }
        }
        else{
        int z=glcd(ans[0],ans[1]);
        ans.pop_front();
        while(ans.size()!=1){
            z=glcd(z,ans[0]);
            ans.pop_front();
        }
        if(z!=1){
            cout << z << endl;
        }
        else{
            cout << "NO" << endl;
        }
        ans.pop_front();
        }
    }
}
