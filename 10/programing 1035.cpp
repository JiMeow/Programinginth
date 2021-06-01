#include <bits/stdc++.h>
using namespace std;
int a[10000000];
int parin(int node){
    deque<int> k;
    int use=node;
    int sizee=0;
    while(1){
        k.push_front(use%10);
        use=use/10;
        sizee++;
        if(use==0){
            break;
        }
    }
    while(k.size()>1){
        if(k.front()!=k.back()){
            return 0;
        }
        else{
            k.pop_back();
            k.pop_front();
        }
    }
    return 1;
}

main(){
    int m;
    a[1]=1;
    for(int i=2;i<10000000;i++){
        if(a[i]==0){
            for(int j=2*i;j<10000000;j+=i){
                a[j]=1;
            }
        }
    }
    cin >> m;
    while(1){
        if(a[m]==1){
            m++;
        }
        else if(a[m]==0){
            if(parin(m)==1){
                cout << m;
                return 0;
            }
            m++;
        }
    }
}
