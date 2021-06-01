#include <bits/stdc++.h>
using namespace std;
int human[1000];
main(){
    int n,k;
    cin >> n >> k;
    int a[n];
    int value[n];
    for(int i=0;i<n;i++){
        a[i]=1;
        cin >> value[i];
    }
    int start=-1;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        x++;
        while(x!=0){
            start++;
            if(a[start%n]==1){
                x--;
            }
        }
        human[i%k] += value[start%n];
        a[start%n]=0;
    }
    for(int i=0;i<k;i++){
        cout << human[i] << endl;
    }
}
